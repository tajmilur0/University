#include<iostream>
#include<cmath>
using namespace std;
#define TOLERANCE 0.001

double fun(double x){
return pow(x,3) - x - 1;
}
double fun_d(double x){
    return 3*pow(x,2)-1;
}
double fun_dd(double x){
    return 6*x;
}

void Hallys(double a, double b){
    if(fun(a)*fun(b)>=0){
        cout << "You have assumed the wrong a and b" << endl;
        return;
    }

    double c = (a+b)/2;
    double next;
    int iteration = 0;

    while(true){

        iteration++;
        next = c-((2*fun(c)*fun_d(c))/((2*fun_d(c)*fun_d(c))-fun(c)*fun_dd(c)));

        if(fabs(fun(next))<=TOLERANCE){
            break;
        }
        else{
            c=next;
        }
    }

    cout << "The Root is: " << next << endl;
    cout << "The number of iteration is : " << iteration << endl;


}
int main(){
int a = 1, b=2;
Hallys(a,b);

return 0;}
