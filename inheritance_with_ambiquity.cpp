#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void show() {
        cout << "Base1 show function called" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void show() {
        cout << "Base2 show function called" << endl;
    }
};

// Derived class
class Derived : public Base1, public Base2 {
public:
    // Resolving ambiguity by specifying which show function to call
    void show() {
        Base1::show();  // Call Base1's show
        Base2::show();  // Call Base2's show
    }
};

int main() {
    Derived obj;

    // Calling the show function from the Derived class
    obj.show();

    return 0;
}

