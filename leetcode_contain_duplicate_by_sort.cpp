#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,8};
    sort(arr, arr+5);
    int count = 0;
    for(int i = 0; i<5; i++){
       if(arr[i]==arr[i+1]){
        count++;
        break;
       }
    }

    if(count > 0){
        cout << "True" ;
    }
    else{
        cout << "False";
    }

    return 0;

}
