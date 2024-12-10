#include <iostream>
using namespace std;

int factorial(int n){
if(n==0) return 1;
return n*factorial(n-1);
}

double ForwardInterpolation(double x[], double y[], int n, int xp){
    double h = x[1]-x[0];
    double p = xp - x[0]/h;

    //creating the difference table

    double diff[n][n];

    for(int i=0;i<n;i++){
        diff[i][0] = y[i];
    }

            for(int j=1; j<n;j++){
                for(int i=0;i<n-j;i++){
                    diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
                }
            }

            //Applying the formula
            double result = y[0];
            double Pterm = 1.0;
            for(int i=1;i<n;i++){
                Pterm *= (p-(i-1));
                result += (Pterm*diff[0][i])/factorial(i);
            }
            return result;
}

int main(){
    int n;
cout << "Enter the number of data points: " << endl;
    cin >> n;
    double x[n], y[n],xp;

    cout << "Enter the x and y values in pair: " << endl;
    for(int i=0;i<n;i++){
        cout << "x" << i << " ";
        cin >> x[i];
        cout << "y" << i << " ";
        cin >> y[i];
    }

    cout << "Enter the value of x:  ";
    cin >> xp;
    if(xp<x[0] || xp> x[n-1]){
        cout << "Error! Interpolation point out of the range...." << endl;
    }
    else{
        cout << "Interpolation value at x = " << xp << "is "<<
                        ForwardInterpolation(x,y,n,xp) << endl;
    }


return 0;
}
