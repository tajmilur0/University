#include<iostream>
using namespace std;
class Test{
private:
    double base = 10.5;
    double height = 5.5;
public:
    friend void F_fun(Test);

};
void F_fun(Test obj){
    double area =0.5*obj.base*obj.height;
    cout<< "The area is: " << area << endl;
}
int main(){
Test ob;
F_fun(ob);
return 0;
}
