#include <iostream>
using namespace std;

 class person
    {
    public:
        string name;
        int age;

    public:
        void display ()
        {
            cout << "Name is " << name <<endl;
            cout << "Age is " << age << endl;
        }
    };

    class student : public person
    {
    public:
        int Id;

        void display2()
        {
            cout << "ID is " << Id <<endl;
            display();

        }

    };


int main()
{
   student s1;
   s1.name = "Md Tajmilur Rahman";
   s1.age = 22;
   s1.Id = 234234;
   s1.display2();
    return 0;
}
