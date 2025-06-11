# pragma once

# include "Polygon.hpp"

class Rectangle: public Polygon
{
    public:
        Rectangle(float height, float width);
        // override the virtual function
        virtual float area() const override;
};
