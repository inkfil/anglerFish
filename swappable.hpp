template <typename T>
class Swappable {
public:
    virtual void swap(T& other) = 0;
};

/*

usage:

template <typename T>
class Point : public Swappable<Point<T>> {
private:
    T x, y;

public:
    Point(T x, T y) : x(x), y(y) {}

    T getX() const { return x; }
    T getY() const { return y; }

    void swap(Point<T>& other) override {
        std::swap(x, other.x);
        std::swap(y, other.y);
    }
};


*/