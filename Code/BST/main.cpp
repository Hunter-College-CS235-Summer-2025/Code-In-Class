/**
 * @file main.cpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Basic tests for BST class
 * @date 2024-07-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <vector>
#include <utility>
#include "BST.hpp"
#include "Visitor.hpp"

// Overload the << operator for printing out a vector
template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& container) {
    for (auto i: container) {
        os << i << " ";
    }
    return os;
}

// Visitor to traverse a BST and store items in a vector
template <class T>
class VectorVisitor : public Visitor<T> {
    public:
        virtual void operator()(const T& x) override {
            visited_.push_back(x);
        }
        std::vector<T> getVisited() const {
            return visited_;
        }
        void clear() {
            visited_.clear();
        }
    private:
        std::vector<T> visited_;
};

int main() {
    BST<int> a;
    BST<int> b = std::move(a);
    BST<int> c = b;
    std::cout << c.isEmpty() << std::endl;
    c.add(5);
    c.add(1);
    c.add(2);
    c.add(6);
    c.add(10);
    c.add(19);
    c.add(129);
    std::cout << c.isEmpty() << std::endl;
    a = c;
    c.clear();
    std::cout << c.isEmpty() << std::endl;
    std::cout << a.isEmpty() << std::endl;
    VectorVisitor<int> traverser;
    a.inorderTraverse(traverser);
    std::cout << traverser.getVisited() << std::endl;
}
