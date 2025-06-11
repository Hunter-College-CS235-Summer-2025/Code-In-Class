# include <iostream>
# include <vector>
# include "Polygon.hpp"
# include "Triangle.hpp"
# include "Rectangle.hpp"

int main() {
    Triangle a(10,10);
    Rectangle b(20,20);

    std::vector<Polygon*> vec;
    vec.push_back(&a);
    vec.push_back(&b);

    // area() function call determined during runtime 
    for(auto p: vec){
        std::cout << p->area() << std::endl;
    }
}
