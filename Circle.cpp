#include "Circle.h"

using namespace shapes;

// Default constructor
Circle::Circle()
{
    radius = 0.0f;
}

// Overloaded constructor
Circle::Circle(float r)
{
    radius = r;
}

// Destructor
Circle::~Circle()
{
    // nothing to clean up
}

// Setter
void Circle::setRadius(float r)
{
    radius = r;
}

// Getter
float Circle::getRadius() const
{
    return radius;
}