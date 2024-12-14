#include <bits/stdc++.h>
using namespace std;

void Spiral(int rows,int cols,int mat[3][3]){
            int top = 0, bottom = rows-1;
            int left = 0, right = cols-1;

            while(top <= bottom && left <= right){
                    //Traverse Left to Right
                for(int i = left; i<=right;i++){
                    cout << mat[top][i] << " ";
                }
                top++;
            //Traverse Top to Bottom
            for(int i=top;i<=bottom;i++){
                cout << mat[i][right] << " ";
            }
            right--;
            //Traverse Right to Left
            if(top<=bottom) {
                for(int i=right;i>=left;i--){
                    cout << mat[bottom][i] << " ";
                }
                    bottom--;
            }

            //Traverse Bottom to Top

            if(left<=right)
                for(int i=bottom;i>=top;i--){
                    cout <<mat[i][left]<<" ";
                }
            left++;
                }
}

int main(){
int mat[3][3] = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
                };
Spiral(3,3,mat);
return 0;
}
