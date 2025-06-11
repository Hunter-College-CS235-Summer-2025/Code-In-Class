# include "Rectangle.hpp"

Rectangle::Rectangle(float height, float width) : Polygon(4,height,width) {}

float Rectangle::area() const {
    return width_ * height_;
}
