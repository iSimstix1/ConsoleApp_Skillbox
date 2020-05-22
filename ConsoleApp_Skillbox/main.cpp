#include<iostream>

class Animal {

public:

    virtual void Voice() { std::cout << "Animals make sounds:\n" << std::endl; };
    
};

class  Dog : public Animal{

public:
    void Voice() override {
        std::cout << "Dog: Woof!\n";
    }
};

class Cat : public Animal{

public:
    void Voice() override {
        std::cout << "Cat: Meow!\n";
    }
};

class Cow : public Animal{

public:
    void Voice() override {
        std::cout << "Cow: Mooo!\n";
    }
};

int main()
{

    Animal* object[4];

    object[0] = new Animal;
    object[1] = new Cat;
    object[2] = new Dog;
    object[3] = new Cow;

    for (int i = 0; i < 4; i++) {
        object[i]->Voice();
    }

    return 0;
}