#include <iostream>
#include<cmath>
#define TOLERANCE 0.0001
using namespace std;
double fun(double x){
     return pow(x,3)-x-1;
}

double fun_d(double x){
    return 3*pow(x,2)-1;
}

double fun_dd(double x){
    return 6*x-1;
}

void Hallay(double a, double b){
    if(fun(a)* fun(b) >= 0){
        cout << "you have assumed wrong a and b" << endl;
        return;
    }
    double c,m;
    int iteration =0;
    m=(a+b)/2;

    do{
            iteration++;
        c = m-((2*fun(m)*fun_d(m))/(2*fun_d(m)*fun_d(m) - fun(m)*fun_dd(m)));
        if(fun(c)<TOLERANCE){
            break;
        }
    else{
        m=c;
    }
    }while(fabs(fun(c))>TOLERANCE);
    cout << "The root is " << c << endl;
    cout << "Iteration " << iteration << endl;


}

int main(){

double a =1,b=2;
Hallay(a,b);
return 0;
}
