#include<iostream>

using namespace std;

class Employee{
// write a program about constructor and distructor
public:
    string name;
    Employee(){
    cout << "Default Constructor Invoked" << endl;
    }

     Employee(string myname){
         name = myname;
    cout << "My name is " << name << endl;
    }


    ~Employee(){
    cout << "Default Distructor Invoked" << endl;
    }
};

int main(){

Employee e1("Md Tajmilur Rahman");
Employee e2;

return 0;
}
