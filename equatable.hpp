template <typename T>
class Equatable {
public:
    virtual bool operator==(const T& other) const = 0;
};


/*

usage:

template <typename T>
class Point : public Equatable<Point<T>> {
private:
    T x, y;

public:
    Point(T x, T y) : x(x), y(y) {}

    T getX() const { return x; }
    T getY() const { return y; }

    bool operator==(const Point<T>& other) const override {
        return x == other.x && y == other.y;
    }
};


*/