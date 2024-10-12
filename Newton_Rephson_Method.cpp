#include<iostream>
#include<cmath>
#define TOLERANCE 0.0001
using namespace std;


double fun(double x){
    return pow(x,3) - x-1;
}
double fun_d(double x){   // For derivatives
    return 3*pow(x,2)-1;
}
void Newton(double a, double b){
    if(fun(a)*fun(b) >= 0){
        cout << "you have assumed wrong a and b" << endl;
        return;
    }
    int iteration;
    double x0,x1;
    x0 = (a+b)/2;
    while(true){
        x1 = x0 - (fun(x0)/fun_d(x0));
        iteration++;
        if(fabs(x1-x0)<=TOLERANCE){
            break;
        }
        else{
            x0=x1;
        }
    }
    cout << "The root is " << x1 << endl;
    cout << "Iteration: " << iteration << endl;
}
int main()
{
    double a=1,b=2;
    Newton(a,b);
    return 0;
}
