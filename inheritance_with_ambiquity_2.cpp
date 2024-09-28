#include<iostream>

using namespace std;

class Base1{
public:
    void show(){
    cout << "This is from Base1" << endl;
    }

};

class Base2{
public:
    void show(){
    cout << "This is from Base2" << endl;
    }
};

class Child : public Base1,public Base2{
public:
    void Display(){
    Base1::show();
    Base2::show();
    }
};

int main(){
Child obj;
obj.Display();
return 0;
}
