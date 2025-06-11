# pragma once

# include <iostream>

class Polygon
{
    protected:
        std::size_t sides_;
        float height_;
        float width_;
    public:
        // constructor
        Polygon(size_t sides, float height, float width);
        // getters
        size_t getSides() const;
        float getHeight() const;
        float getWidth() const;
        // setters
        void setSides(size_t sides);
        void setHeight(size_t height);
        void setWidth(size_t width);
        // purely virtual function
        virtual float area() const = 0;
};
