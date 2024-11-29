#include<bits/stdc++.h>

using namespace std;

int binaryRecur(int arr[], int left, int right, int target){
    if (left>right)
        return -1;
    int mid = left+(right-left)/2;
    if(arr[mid] ==  target)
        return mid;
    else if(arr[mid] < target)
        return binaryRecur(arr,mid+1,right,target);
    else
        return binaryRecur(arr,left,mid-1,target);

}

int main(){

    int arr[] = {2,5,3,89,4,24,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 89;
    sort(arr,arr+n);
    int result = binaryRecur(arr,0,n-1,target);
    if(result != -1)
        cout << "Element found at index no: " << result<< " and the target value is " << arr[result] << endl;
    else
        cout << "Element not found" << endl;
return 0;
}
