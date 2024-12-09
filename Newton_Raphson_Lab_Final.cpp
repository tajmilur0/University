#include <iostream>
#include <cmath>
using namespace std;
#define TOLERANCE 0.001

double fun(double x){
 return pow(x,3) - x -1;
}
double fun_d(double x){
    return 3*pow(x,2)-1;
}

void Newton_Raphson(double a, double b){
        if(fun(a)*fun(b) >=0){
            cout << "you have assumed wrong a and b" << endl;
            return;
        }
        double c = (a+b)/2;
        double e;
        int iteration=0;
        while(true){
            iteration++;
            e = c-(fun(c)/fun_d(c));
            if(fun(e) <= TOLERANCE){
                break;
            }
            else{
                c=e;
            }
        }

        cout << "The root is: " << e << endl;
        cout << "The number of iteration: " << iteration << endl;
}

int main(){
int a=1, b=2;
Newton_Raphson(a,b);

return 0;
}
