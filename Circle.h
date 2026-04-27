#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes
{
    class Circle
    {
    private:
        float radius;

    public:
        // Constructors
        Circle();            // default
        Circle(float r);     // overloaded

        // Destructor
        ~Circle();

        // Setter
        void setRadius(float r);

        // Getter
        float getRadius() const;
    };
}

#endif