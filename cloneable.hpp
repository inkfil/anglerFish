template <typename T>
class Cloneable {
public:
    virtual T* clone() const = 0;
};

/*

usage:

class Person : public Cloneable<Person> {
private:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    std::string getName() const { return name; }
    int getAge() const { return age; }

    Person* clone() const override {
        return new Person(name, age);
    }
};

*/