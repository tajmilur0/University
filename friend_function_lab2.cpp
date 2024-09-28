#include<iostream>

using namespace std;

class Taj{
private:
    double base = 10.43;
    double height = 43.98;
public:

    friend void calculate(Taj);
};
void calculate(Taj obj){
double area = 0.5 * obj.base * obj.height;
cout << "The area is == " << area<< endl;
}

int main(){
    Taj ob;
    calculate(ob);
return 0;
}

