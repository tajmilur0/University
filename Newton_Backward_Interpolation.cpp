#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

double backwardInterpolation(double x[], double y[],int n,double xp){
    double h = x[1] - x[0];
    double p = (xp-x[n-1])/h;

    // creating the difference table

    double diff[n][n];
    double PTerm = 1.0;

    for(int i=0;i<n;i++){
        diff[i][0] = y[i];
    }
    for(int j=1;j<n;j++){
        for(int i=n-1;i>=j;i--){
            diff[i][j] = diff[i][j-1] - diff[i-1][j-1];
        }
    }
    //applying formula
    double result = y[n-1];
    double Pterm = 1.0;
    for(int i=1;i<n;i++){
        Pterm *= (p+(i-1));
        result += (Pterm*diff[n-1-i][i])/factorial(i);
    }

    return result;


}

int main(){
int n;
cout << "Enter the number of points: ";
cin>>n;
double x[n],y[n],xp;
cout << "Enter the value of x and y with pair: " << endl;
for(int i=0;i<n;i++){
    cout << "x["<< i<< "] = " ;
    cin>>x[i];
    cout << "y[" <<i <<"] = " ;
    cin>>y[i];
}
cout << "Enter the value of x: " << endl;
cin>>xp;

if(xp<x[0] || xp>x[n-1]){
    cout << "Error! Interpolation point out of the range"<< endl;
}
else{
    cout << "The Backward Interpolation at x = "<<xp << " is " <<
                backwardInterpolation(x,y,n,xp);
}
return 0;
}
