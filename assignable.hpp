template <typename T>
class Assignable {
public:
    virtual T& operator=(const T& other) = 0;
};

/*

usage:

template <typename T>
class Matrix : public Assignable<Matrix<T>> {
private:
    std::vector<std::vector<T>> data;

public:
    Matrix() : data() {}
    explicit Matrix(const std::vector<std::vector<T>>& data) : data(data) {}

    T& operator[](size_t i, size_t j) { return data[i][j]; }
    const T& operator[](size_t i, size_t j) const { return data[i][j]; }
    size_t rows() const { return data.size(); }
    size_t cols() const { return data[0].size(); }

    Matrix<T>& operator=(const Matrix<T>& other) override {
        data = other.data;
        return *this;
    }
};



*/