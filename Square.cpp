#include "Square.h"

using namespace shapes;

Square::Square()
{
    side = 0.0f;
}

Square::Square(float s)
{
    side = s;
}

Square::~Square() {}

void Square::setSide(float s)
{
    side = s;
}

float Square::getSide() const
{
    return side;
}