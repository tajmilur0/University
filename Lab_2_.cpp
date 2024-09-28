
#include<iostream>

using namespace std;
class myclass
{
private:
    int roll;
    string name;
    float cgpa;
public:
    void setdata(int myroll,float mycgpa,string myname)
    {
        roll = myroll;
        cgpa = mycgpa;
        name = myname;


    }

    void showdata()
    {
        cout << "My name is " << name <<endl;
        cout << "My roll is " << roll <<endl;
        cout << "My cgpa is " << cgpa <<endl;

    }



};

int main()
{
    myclass taj,milur;

    taj.setdata(27,3.50,"Md Tajmilur Rahman");
    taj.showdata();
    milur.setdata(200,3.80,"Md Milur Rahman");
    milur.showdata();

    return 0;
}
