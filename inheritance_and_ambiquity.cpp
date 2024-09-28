#include<iostream>
using namespace std;

class A{
public:
    void display(){
    cout << "This is class A" << endl;
    }

};

class B{
public:
    void display(){
    cout << "This is class B" << endl;
    }

};

class C : public  A, public  B{
public:
    void show(){
    A::display();
    B::display();

    }
};

int main(){
C obj;
obj.show();

return 0;
}
