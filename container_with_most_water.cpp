
#include <iostream>
#include <algorithm> // for min and max functions

using namespace std;

// Function to calculate the maximum area
int maxArea(int height[], int n) {
    int left = 0, right = n - 1; // Two pointers
    int max_area = 0;

    while (left < right) {
        // Calculate the area
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;

        // Update the maximum area
        max_area = max(max_area, area);

        // Move the pointer pointing to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    // Input: Heights of vertical lines (array)
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]); // Size of the array

    // Find the maximum area
    int result = maxArea(height, n);

    // Display the result
    cout << "The maximum area of water the container can hold is: " << result << endl;

    return 0;
}
