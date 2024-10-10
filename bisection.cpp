#include<iostream>
using namespace std;
#define TOLERANCE 0.01

double func(double x){
    return x*x*x-x*x+2;

}

void bisection(double a, double b){
if(func(a)*func(b)>=0){
    cout <<"You have not assumed right a and b "<<endl;
    return;
}

double c;
while((b-a)>=TOLERANCE){
    c=(a+b)/2;
    if(func(c) == 0.0)
        break;
    else if(func(c)*func(a)<0)
        b=c;
    else
        a=c;
}
cout <<"The value of root is " << c << endl;
}

int main(){

double a= -200,b=300;

bisection(a,b);

return 0;
}
