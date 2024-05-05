using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() : length(0), width(0) {}

    // Overloaded constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Destructor (does nothing for now)
    ~Rectangle() {}

    // Accessor methods for assigning values
    void setLength(float l) { length = l; }
    void setWidth(float w) { width = w; }

    // Accessor methods for retrieving values
    float getLength() { return length; }
    float getWidth() { return width; }

    // Member function to calculate and return the area
    float calculateArea() { return length * width; }
};