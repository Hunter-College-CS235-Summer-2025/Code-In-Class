/**
 * @file BST.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Implementation for BinarySearchTree(BST)
 * @date 2024-07-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "BST.hpp"

template <class T>
BST<T>::BST() {
    root_ptr_ = nullptr;
}

template <class T>
BST<T>::BST(const BST<T>& tree) {
    root_ptr_ = copyTree(tree.root_ptr_);
}

template<class T>
std::shared_ptr<BinaryNode<T>> BST<T>::copyTree(const std::shared_ptr<BinaryNode<T>> old_tree_root_ptr) const {
    std::shared_ptr<BinaryNode<T>> new_tree_ptr;
    // if node we are copying is not nullptr
    if (old_tree_root_ptr != nullptr) {
        // copy the item of the old_tree_root_ptr into a new node
        new_tree_ptr = std::make_shared<BinaryNode<T>>(old_tree_root_ptr -> getItem(), nullptr, nullptr);
        // copy the left and right subtree
        new_tree_ptr -> setLeftChildPtr(copyTree(old_tree_root_ptr -> getLeftChildPtr()));
        new_tree_ptr -> setRightChildPtr(copyTree(old_tree_root_ptr -> getRightChildPtr()));
    }
    return new_tree_ptr;
}

template<class T>
BST<T>::BST(BST<T>&& tree) {
    root_ptr_ = tree.root_ptr_;
    tree.root_ptr_.reset();
}

template<class T>
BST<T>::~BST() {
    destroyTree(root_ptr_);
    root_ptr_.reset();
}

template<class T>
void BST<T>::destroyTree(std::shared_ptr<BinaryNode<T>> sub_tree_ptr) {
    // postorder deletion of every node in the tree
    if (sub_tree_ptr != nullptr) {
        destroyTree(sub_tree_ptr->getLeftChildPtr());
        destroyTree(sub_tree_ptr->getRightChildPtr());
        sub_tree_ptr.reset();
    }
}

template<class T>
bool BST<T>::isEmpty() const {
    return root_ptr_ == nullptr;
}

template<class T>
size_t BST<T>::getHeight() const {
    return getHeightHelper(root_ptr_);
}

template<class T>
size_t BST<T>::getHeightHelper(std::shared_ptr<BinaryNode<T>> sub_tree_ptr) const {
    if (sub_tree_ptr == nullptr) {
        return 0;
    }
    return 1 + std::max(getHeightHelper(sub_tree_ptr->getLeftChildPtr()), getHeightHelper(sub_tree_ptr->getRightChildPtr()));
}

template<class T>
void BST<T>::add(const T& new_item) {
    auto new_node_ptr = std::make_shared<BinaryNode<T>>(new_item);
    root_ptr_ = placeNode(root_ptr_, new_node_ptr);
}

template<class T>
auto BST<T>::placeNode(std::shared_ptr<BinaryNode<T>> subtree_ptr, std::shared_ptr<BinaryNode<T>> new_node_ptr) {
    // root becomes the new_node_ptr if root is nullptr
    if (subtree_ptr == nullptr) {
        return new_node_ptr;
    }
    // place node to the left subtree if node is less than or equal to root item
    if (subtree_ptr -> getItem() > new_node_ptr -> getItem()) {
        subtree_ptr -> setLeftChildPtr(placeNode(subtree_ptr -> getLeftChildPtr(), new_node_ptr));
    }
    // place node to the right subtree if node is greater than root item
    else {
        subtree_ptr->setRightChildPtr(placeNode(subtree_ptr->getRightChildPtr(), new_node_ptr));
    }
    return subtree_ptr;
}

template<class T>
bool BST<T>::remove(const T& target) {
    bool is_successful = false;
    // call may change is_successful depending on if target exists in the tree
    root_ptr_ = removeValue(root_ptr_, target, is_successful);
    return is_successful;
}

template<class T>
std::shared_ptr<BinaryNode<T>> BST<T>::removeValue(std::shared_ptr<BinaryNode<T>> subtree_ptr, const T target, bool& success) {
    // Not found here
    if (subtree_ptr == nullptr) {
        success = false;
        return subtree_ptr;
    }
    // Item is in the root of this subtree
    if (subtree_ptr->getItem() == target) {
        subtree_ptr = removeNode(subtree_ptr);
        success = true;
        return subtree_ptr;
    }
    // Search the left subtree if target is less than or equal to root item
    if (subtree_ptr->getItem() > target) {
        subtree_ptr->setLeftChildPtr(removeValue(subtree_ptr
        ->getLeftChildPtr(), target, success));
    }
    // Search the right subtree if target is greater than root item
    else {
        subtree_ptr->setRightChildPtr(removeValue(subtree_ptr
        ->getRightChildPtr(), target, success));
    }
    return subtree_ptr;
}

template<class T>
std::shared_ptr<BinaryNode<T>> BST<T>::removeNode(std::shared_ptr<BinaryNode<T>> node_ptr) {
    // case 1: node getting removed is a leaf
    if (node_ptr->isLeaf()) {
        node_ptr.reset();
        return node_ptr;
    }
    // case 2: node only has right child
    else if (node_ptr->getLeftChildPtr() == nullptr) {
        return node_ptr->getRightChildPtr();
    }
    // case 2: node only has left child
    else if (node_ptr->getRightChildPtr() == nullptr) {
        return node_ptr->getLeftChildPtr();
    }
    // case 3: both right and left child
    T new_node_value;
    node_ptr->setRightChildPtr(removeLeftmostNode(node_ptr->getRightChildPtr(), new_node_value));
    node_ptr->setItem(new_node_value);
    return node_ptr;
} 

template<class T>
std::shared_ptr<BinaryNode<T>> BST<T>::removeLeftmostNode(std::shared_ptr<BinaryNode<T>> nodePtr, T& inorderSuccessor) {
    // remove the node if we are at the leftmost leaf of the right subtree
    if (nodePtr->getLeftChildPtr() == nullptr) {
        inorderSuccessor = nodePtr->getItem();
        return removeNode(nodePtr);
    }
    // traverse to the leftmost leaf
    nodePtr->setLeftChildPtr(removeLeftmostNode(nodePtr->getLeftChildPtr(), inorderSuccessor));
    return nodePtr;
}

template<class T>
void BST<T>::clear() {
    destroyTree(root_ptr_);
    root_ptr_.reset();
} 

template<class T>
void BST<T>::inorderTraverse(Visitor<T>& visit) const{
    std::stack<std::shared_ptr<BinaryNode<T>>> node_stack;
    std::shared_ptr<BinaryNode<T>> current_ptr = root_ptr_;
    bool done = false;
    while(!done) {
        if(current_ptr != nullptr) {
            node_stack.push(current_ptr);
            //traverse left subtree
            current_ptr = current_ptr->getLeftChildPtr();
        }
        else {
            done = node_stack.empty();
            if(!done) {
                current_ptr = node_stack.top();
                visit(current_ptr->getItem());
                node_stack.pop();
                //traverse right subtree of node just visited
                current_ptr = current_ptr->getRightChildPtr();
            }
        }
    }
}

template<class T>
BST<T>& BST<T>::operator= (const BST<T>& rhs) {
    root_ptr_ = copyTree(rhs.root_ptr_);
    return *this;
}

template<class T>
BST<T>& BST<T>::operator= (BST<T>&& rhs) {
    root_ptr_ = rhs.root_ptr_;
    rhs.root_ptr_.reset();
    return *this;
}
