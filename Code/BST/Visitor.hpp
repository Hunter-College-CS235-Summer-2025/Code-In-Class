/**
 * @file Visitor.hpp
 * @author Sadab Hafiz (sh3646@hunter.cuny.edu)
 * @brief Abstract class to traverse the BST. Visiting logic to be defined by derived classes.
 * @date 2024-07-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef Visitor_hpp
#define Visitor_hpp

#include <string>

template<class T>
class Visitor
{
    public:
        virtual void operator()(const T& x) = 0;
};

#endif
