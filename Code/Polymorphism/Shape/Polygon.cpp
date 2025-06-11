# include "Polygon.hpp"

Polygon::Polygon(size_t sides, float height, float width) : sides_(sides), height_(height), width_(width) {}

size_t Polygon::getSides() const {
    return sides_;
}

float Polygon::getHeight() const {
    return height_;
}

float Polygon::getWidth() const {
    return width_;
}

void Polygon::setSides(size_t sides) {
    sides_ = sides;
}

void Polygon::setHeight(size_t height) {
    height_ = height;
}

void Polygon::setWidth(size_t width) {
    width_ = width;
}

