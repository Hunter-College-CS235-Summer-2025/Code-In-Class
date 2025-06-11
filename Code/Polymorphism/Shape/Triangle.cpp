# include "Triangle.hpp"

Triangle::Triangle(float height, float width) : Polygon(3,height,width) {}

float Triangle::area() const {
    return 0.5 * width_ * height_;
}
