namespace shapes {
class Circle {
private:
    float radius;

public:
    // Default constructor
    Circle() : radius(0) {}

    // Overloaded constructor
    Circle(float r) : radius(r) {}

    // Destructor
    ~Circle() {}

    // Accessor methods
    float getRadius() { return radius; }
    void setRadius(float r) { radius = r; }
};
}  // namespace shapes