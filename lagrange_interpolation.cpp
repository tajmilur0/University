#include <iostream>
using namespace std;

double lagrangeInterpolation(double x[], double y[], int n, double xp) {
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (xp - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    double x[n], y[n];
    cout << "Enter the x and y values:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
    }

    double xp;
    cout << "Enter the value of x to find y: ";
    cin >> xp;

    double yp = lagrangeInterpolation(x, y, n, xp);
    cout << "The interpolated value of y at x = " << xp << " is: " << yp << endl;

    return 0;
}
