# pragma once

# include "Polygon.hpp"

class Triangle: public Polygon
{
    public:
        Triangle(float height, float width);
        // override the virtual function
        virtual float area() const override;
};
