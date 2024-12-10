
#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Forward Interpolation
double forwardInterpolation(double x[], double y[], int n, double xp)
{
    double h = x[1] - x[0]; // Step size
    double u = (xp - x[0]) / h;


    // Creating the difference table
    double diff[n][n];
    for (int i = 0; i < n; i++)
        diff[i][0] = y[i];

    for (int j = 1; j < n; j++)
        for (int i = 0; i < n - j; i++)
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];

    // Applying the formula
    double result = y[0];
    double uTerm = 1.0;
    for (int i = 1; i < n; i++)
    {
        uTerm *= (u - (i - 1));
        result += (uTerm * diff[0][i]) / factorial(i);
    }

    return result;
}

// Backward Interpolation
double backwardInterpolation(double x[], double y[], int n, double xp)
{
    double h = x[1] - x[0]; // Step size
    double u = (xp - x[n - 1]) / h;

    // Creating the difference table
    double diff[n][n];
    for (int i = 0; i < n; i++)
        diff[i][0] = y[i];

    for (int j = 1; j < n; j++)
        for (int i = n - 1; i >= j; i--)
            diff[i][j] = diff[i][j - 1] - diff[i - 1][j - 1];

    // Applying the formula
    double result = y[n - 1];
    double uTerm = 1.0;
    for (int i = 1; i < n; i++)
    {
        uTerm *= (u + (i - 1));
        result += (uTerm * diff[n - 1][i]) / factorial(i);
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    double x[n], y[n], xp;

    cout << "Enter the x and y values:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    cout << "Enter the value of x to interpolate: ";
    cin >> xp;

    // Decide whether to use forward or backward interpolation
    if (xp < x[0] || xp > x[n-1])
    {
        cout << "Error: Interpolation point " << xp << " is out of range!" << endl;
    }
    else
    {
        cout << "Using Forward Interpolation..." << endl;
        cout << "Interpolated value at x = " << xp << " is "
             << forwardInterpolation(x, y, n, xp) << endl;

        cout << "Using Backward Interpolation..." << endl;
        cout << "Interpolated value at x = " << xp << " is "
             << backwardInterpolation(x, y, n, xp) << endl;
    }

    return 0;
}
