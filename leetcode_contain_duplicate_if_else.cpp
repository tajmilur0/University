#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,2};
    int count = 0;
    for(int i = 0; i<5; i++){
        for(int j=i+1;j<5;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
         if(count > 0){
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
