#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();
    Rectangle(float l, float w); // overloaded constructor
    // Destructor
    ~Rectangle();

    // Mutators (setters)
    void setLength(float l);
    void setWidth(float w);

    // Accessors (getters)
    float getLength() const;
    float getWidth() const;

    // Area function
    float calculateArea() const;
};

#endif