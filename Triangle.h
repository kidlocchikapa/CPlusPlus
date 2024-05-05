namespace shapes {
class Triangle {
private:
    float base;
    float height;

public:
    // Default constructor
    Triangle() : base(0), height(0) {}

    // Overloaded constructor
    Triangle(float b, float h) : base(b), height(h) {}

    // Destructor
    ~Triangle() {}

    // Accessor methods
    float getBase() { return base; }
    float getHeight() { return height; }
    void setBase(float b) { base = b; }
    void setHeight(float h) { height = h; }
};
}  // namespace shapes