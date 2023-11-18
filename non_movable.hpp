template <typename T>
class NonMovable {
public:
    NonMovable(const NonMovable &) = delete;
    NonMovable &operator=(const NonMovable &) = delete;
    void move(const T &) = delete;
};


/*

usage:

template <typename T>
class UniqueIdentifier : public NonMovable<UniqueIdentifier<T>> {
private:
    T id;

public:
    UniqueIdentifier(T id) : id(id) {}

    T getId() const { return id; }
};


*/