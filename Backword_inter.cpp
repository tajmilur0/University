
#include <iostream>
using namespace std;

double backwardInterpolate(double x0, double y0, double x1, double y1, double x) {
    return y1 + (x - x1) * (y1 - y0) / (x1 - x0);
}

int main() {
    double x0 = 1.0, y0 = 2.0, x1 = 4.0, y1 = 8.0;
    double x = 3.5;

    double backwardResult = backwardInterpolate(x0, y0, x1, y1, x);
    cout << "Backward Interpolation result: " << backwardResult << endl;

    return 0;
}
