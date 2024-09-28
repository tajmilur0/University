#include<iostream>
using namespace std;
struct Taj{
int roll;
string name;
float salary;

};
int main(){
struct Taj Milur;
Milur.roll = 27;
Milur.name ="Md Tajmilur Rahman";
cin>>Milur.salary;

cout<< "Roll = " << Milur.roll <<endl;
cout << "Name = " << Milur.name <<endl;
cout << "Salary = " << Milur.salary << endl;

return 0;
}
