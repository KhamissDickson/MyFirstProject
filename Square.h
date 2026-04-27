#ifndef SQUARE_H
#define SQUARE_H

namespace shapes
{
    class Square
    {
    private:
        float side;

    public:
        Square();                // default
        Square(float s);         // overloaded
        ~Square();

        void setSide(float s);
        float getSide() const;
    };
}

#endif