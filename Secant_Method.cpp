#include<iostream>
#include<cmath>
#define TOLERANCE 0.0001
using namespace std;
double fun(double x){
    return pow(x,3)-x-1;
}
void Secant(double a,double b){
    if(fun(a)*fun(b) >= 0){
        cout << "You have assumed wrong a and b" << endl;
        return;
    }
    double c;
    int iteration=0;
    do{
            iteration++;
        c= b-((fun(b)*(b-a))/(fun(b)-fun(a)));
        if(c==0){
            break;
        }
        else{
            a=b;
            b=c;
        }

    }while(fabs(b-a) >= TOLERANCE);
    cout << "The root is " << c << endl;
    cout << "Iteration: " << iteration << endl;
}
int main(){
double a=1,b=2;

Secant(a,b);

return 0;
}
