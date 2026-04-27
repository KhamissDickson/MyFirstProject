#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes
{
    class Triangle
    {
    private:
        float base;
        float height;

    public:
        // Constructors
        Triangle();                    // default
        Triangle(float b, float h);   // overloaded

        // Destructor
        ~Triangle();

        // Setters (mutators)
        void setBase(float b);
        void setHeight(float h);

        // Getters (accessors)
        float getBase() const;
        float getHeight() const;
    };
}

#endif