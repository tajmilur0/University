#include<iostream>
using namespace std;

class Taj{
 public:
     int id;
     string name;
     float salary;
     Taj(int i, string myname, float sal){
            id = i;
            name = myname;
            salary = sal;
     }
     void display(){
        cout << "The id is  "<< id << " Name is "<<name<<" salary is " <<salary<<endl;
     }

};

int main(){
    Taj ob1(27,"Md Tajmilur Rahman",5000.98);
    ob1.display();
    Taj ob2(275,"Md  Rahman",1000.98);
    ob2.display();
return 0;
}
