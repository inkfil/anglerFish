template <typename T>
class Copyable {
public:
    virtual T& operator=(const T& other) = 0;
};

/*

usage:

template <typename T>
class Vector : public Copyable<Vector<T>> {
private:
    std::vector<T> data;

public:
    Vector() : data() {}
    explicit Vector(const std::vector<T>& data) : data(data) {}

    T& operator[](size_t index) { return data[index]; }
    const T& operator[](size_t index) const { return data[index]; }
    size_t size() const { return data.size(); }

    Vector<T>& operator=(const Vector<T>& other) override {
        data = other.data;
        return *this;
    }
};


*/