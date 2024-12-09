#include <iostream>
#include <cmath>
using namespace std;
#define TOLERANCE 0.0001

double fun(double x){
    return pow(x,3) - x-1;
}

void SecantMethod(double a, double b){
    if(fun(a)*fun(b)>=0){
        cout << "You have assumed the wrong a and b" << endl;
        return;
    }

    double c;
    int iteration = 0;
    while(true){
        iteration++;
        c = b-((fun(b)*(b-a))/(fun(b)- fun(a)));
        if(fabs(fun(c))<= TOLERANCE){
                break;
        }
        else{
            a=b;
            b=c;
        }

    }
    cout <<"The root is: " << c << endl;
    cout << "The number of iteration is: " << iteration << endl;

}

int main(){
    int a=1,b=2;
    SecantMethod(a,b);
return 0;
}
