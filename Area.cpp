#include "Area.h"

float Area::squareArea(shapes::Square s)
{
    return s.getSide() * s.getSide();
}

float Area::triangleArea(shapes::Triangle t)
{
    return 0.5f * t.getBase() * t.getHeight();
}

float Area::circleArea(shapes::Circle c)
{
    return 3.14159f * c.getRadius() * c.getRadius();
}