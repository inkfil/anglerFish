template <typename T>
class NonCallable {
public:
    NonCallable(const NonCallable&) = delete;
    NonCallable& operator=(const NonCallable&) = delete;
    T operator()() const = delete;
};


/*

usage:

template <typename T>
class UniqueIdentifier : public NonCallable<UniqueIdentifier<T>> {
private:
    T id;

public:
    UniqueIdentifier(T id) : id(id) {}

    T getId() const { return id; }
};


*/