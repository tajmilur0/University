#include <iostream>
using namespace std;

void spiral(int rows, int cols, int mat[4][4]){

int top =0, bottom = rows-1;
int left =0, right = cols-1;

while(top<= bottom && left <= right){
    //left to right

    for(int i =left; i<=right;i++){
        cout << mat[top][i]<<" ";
    }
    top++;
    //top to bottom
    for(int i=top;i<=bottom;i++){
        cout << mat[i][right]<< " ";
    }
    right--;
    //Right to left
    if(top<=bottom){
        for(int i=right;i>=left;i--){
            cout << mat[bottom][i]<< " ";
        }
        bottom--;
    }
    //bottom to top
    if(left<=right){
        for(int i=bottom; i>=top;i--){
            cout << mat[i][left] << " " ;
        }
        left++;
    }

}
cout << endl;
}

int main(){

int mat[4][4]={
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16},
                };
 spiral(4,4,mat);

return 0;
}
