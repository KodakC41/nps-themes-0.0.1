// Example C++ Program for Theme Testing
#include <iostream>
#include <vector>
#include <string>

// Template function
template <typename T>
T multiply(T a, T b) {
    return a * b; // Return the product of two values
}

// Example class
class Animal {
public:
    Animal(const std::string& name) : name(name) {}  // Constructor
    virtual void speak() const { std::cout << name << " makes a sound!" << std::endl; } // Virtual function
    std::string getName() const { return name; } // Getter function

private:
    std::string name; // Member variable
};

// Derived class
class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {} // Constructor
    void speak() const override { std::cout << getName() << " barks!" << std::endl; } // Override function
};

// Main function
int main() {
    // Basic variable declarations
    int a = 5;
    double b = 2.5;
    std::string greeting = "Hello, World!";

    // Using template function
    int productInt = multiply<int>(a, 3);
    double productDouble = multiply<double>(b, 4.0);

    // Output results
    std::cout << "Product of integers: " << productInt << std::endl;
    std::cout << "Product of doubles: " << productDouble << std::endl;
    std::cout << greeting << std::endl;

    // Using classes
    Animal genericAnimal("Animal");
    genericAnimal.speak();

    Dog myDog("Buddy");
    myDog.speak();

    // Loop example
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (int num : numbers) {
        std::cout << "Number: " << num << std::endl; // Print each number
    }

    // Conditional example
    if (a > 3) {
        std::cout << "a is greater than 3." << std::endl;
    } else {
        std::cout << "a is less than or equal to 3." << std::endl;
    }

    return 0; // Exit the program
}
