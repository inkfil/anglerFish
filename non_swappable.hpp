template <typename T>
class NonSwappable {
public:
    NonSwappable(const NonSwappable&) = delete;
    NonSwappable& operator=(const NonSwappable&) = delete;
    void swap(T&) = delete;
};


/*

usage:

template <typename T>
class UniqueIdentifier : public NonSwappable<UniqueIdentifier<T>> {
private:
    T id;

public:
    UniqueIdentifier(T id) : id(id) {}

    T getId() const { return id; }
};


*/