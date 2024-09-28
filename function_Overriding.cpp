#include <iostream>
using namespace std;

class person{
public:
    void display(){
    cout << "I'm the person" << endl;
    }

};

class student : public person{
public:
    void display(){
    cout << "I'm the student " <<endl;

    }

};

class Teacher : public person{
public:
    void display(){
    cout << "I'm the Teacher" << endl;
    }

};
int main(){
person p1;
student s1;
Teacher t1;

s1.display();
t1.display();
p1.display();
return 0;
}
