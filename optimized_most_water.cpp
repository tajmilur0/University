
#include<iostream>
using namespace std;

int main(){
int mat[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
int left =0, right =8;
int most =0;

while(left<right){
    int area = min(mat[left], mat[right])*(right-left);
    most = max(most,area);
    if(mat[left]<mat[right]){
        left++;
    }
    else{
        right--;
    }
}
cout << most << endl;
return 0;
}
