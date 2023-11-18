template <typename T>
class NonCopyable {
public:
    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};

/*

usage:

template <typename T>
class UniqueIdentifier : public NonCopyable<UniqueIdentifier<T>> {
private:
    T id;

public:
    UniqueIdentifier(T id) : id(id) {}

    T getId() const { return id; }
};

*/