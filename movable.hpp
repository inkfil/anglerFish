template <typename T>
class Movable {
public:
    virtual void move(const T& destination) = 0;
};


/*

usage:

class Car : public Movable<Car> {
private:
    std::string location;

public:
    Car(const std::string& location) : location(location) {}

    std::string getLocation() const { return location; }

    void move(const std::string& destination) override {
        location = destination;
    }
};


*/