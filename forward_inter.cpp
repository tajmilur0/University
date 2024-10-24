
#include <iostream>
using namespace std;

double forwardInterpolate(double x0, double y0, double x1, double y1, double x) {
    return y0 + (x - x0) * (y1 - y0) / (x1 - x0);
}

int main() {
    double x0 = 1.0, y0 = 2.0, x1 = 4.0, y1 = 8.0;
    double x = 3.5;

    double forwardResult = forwardInterpolate(x0, y0, x1, y1, x);
    cout << "Forward Interpolation result: " << forwardResult << endl;

    return 0;
}
