namespace shapes {
class Square {
private:
    float sideLength;

public:
    // Default constructor
    Square() : sideLength(0) {}

    // Overloaded constructor
    Square(float side) : sideLength(side) {}

    // Destructor
    ~Square() {}

    // Accessor methods
    float getSideLength() { return sideLength; }
    void setSideLength(float side) { sideLength = side; }
};
}  // namespace shapes