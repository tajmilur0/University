#include<iostream>
using namespace std;

class Circle{
public:
    double radius;
    double compute_area(){

    return 3.1416 * radius*radius;
    }
};

int main(){
 Circle obj;
 obj.radius = 2.0;
 cout << "The radius is " << obj.radius << endl;
 cout << "The area is " << obj.compute_area();
return 0;
}
