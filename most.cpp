#include <iostream>
using namespace std;
 int maxArea(int arr[]) {
     int most=0;
      int area;
        for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
                if(arr[i]<arr[j]){
                   area = arr[i]*(j-i);
                }
                   else{
                        area = arr[j]*(j-i);
                   }
               if(area>most){
                most = area;
               }
        }


}
        return most;
    }
int main(){

int arr[9] = {1,8,6,2,5,4,8,3,7};

cout << maxArea(arr);

return 0;
}

