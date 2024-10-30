#include <iostream>
using namespace std;

double linearInterpolation(double x0, double y0, double x1, double y1, double x) {
    return y0 + ((y1 - y0) / (x1 - x0)) * (x - x0);
}

int main() {
    double x0, y0, x1, y1, x;
    cout << "Enter x0, y0 (first known point): ";
    cin >> x0 >> y0;
    cout << "Enter x1, y1 (second known point): ";
    cin >> x1 >> y1;

    cout << "Enter x (value to interpolate): ";
    cin >> x;

    double interpolatedY = linearInterpolation(x0, y0, x1, y1, x);

    cout << "The interpolated value at x = " << x << " is y = " << interpolatedY << endl;

    return 0;
}
