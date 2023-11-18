template <typename T>
class NonAssignable {
public:
    NonAssignable(const NonAssignable&) = delete;
    NonAssignable& operator=(const NonAssignable&) = delete;
};

/*

usage:

template <typename T>
class UniqueIdentifier : public NonAssignable<UniqueIdentifier<T>> {
private:
    T id;

public:
    UniqueIdentifier(T id) : id(id) {}

    T getId() const { return id; }
};


*/