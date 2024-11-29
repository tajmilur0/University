#include <bits/stdc++.h>
using namespace std;


int binarysch(int arr[], int n, int target){
int left = 0, right = n-1, mid;

while(left<=right){

    mid = left + (right-left)/2;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid] < target)
         left = mid+1;
    else
         right = mid-1;
}
return -1;

}

int main(){

    int arr[] = {2,5,3,89,4,24,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 89;
    sort(arr,arr+n);
    int result = binarysch(arr,n,target);
    if(result != -1)
        cout << "Element found at index no: " << result<< " and the target value is " << arr[result] << endl;
    else
        cout << "Element not found" << endl;
return 0;
}
