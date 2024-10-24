#include <iostream>
#include <cmath>
using namespace std;
#define TOLERANCE 0.0001

double fun(double x){
return pow(x,3)-x-1;
}
void bisection(double a, double b){
    if(fun(a)*fun(b) >= 0){
        cout << "You have assumed wrong a and b" << endl;
        return;
    }
    double c;
    int iteration = 0;

    while((b-a)>=TOLERANCE){
            iteration++;
         c = (a+b)/2;
    if(fun(c)==0){
        break;
    }
    else if(fun(a)*fun(c) < 0){
        b=c;
    }
     else if(fun(b)*fun(c) < 0){
        a=c;
    }
    }
   cout << "The root is "<< c << endl;
   cout << "Iteration: " << iteration << endl;
}

int main(){

double a = 1 , b=2;

bisection(a,b);

return 0;
}
