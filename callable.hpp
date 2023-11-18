template <typename T>
class Callable {
public:
    virtual T operator()() const = 0;
};


/*

usage:

class Counter : public Callable<int> {
private:
    int count = 0;

public:
    int operator()() const override {
        return count++;
    }
};

*/