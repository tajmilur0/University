#include <iostream>
#include <cmath>
using namespace std;

#define TOLERANCE 0.0001

double fun(double x) {
    return pow(x, 3) - x - 1;
}

void false_position(double a, double b) {
    if (fun(a) * fun(b) >= 0) {
        cout << "You have assumed wrong a and b" << endl;
        return;
    }

    double c;
    int iteration = 0;

    while (fabs(b - a) >= TOLERANCE) {
        iteration++;
        c = a - (fun(a) * (b - a)) / (fun(b) - fun(a));
        if (fabs(fun(c)) < TOLERANCE) {

            break;
        }

        if (fun(a) * fun(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    cout << "The root is  " << c  << endl;
    cout << "Total iterations: " << iteration << endl;
}

int main() {
    double a = 1, b = 2;
    false_position(a, b);
    return 0;
}
