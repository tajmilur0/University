#include<bits/stdc++.h>
using namespace std;

int main(){
 int mat[4][4] = {
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };
                    //Transpose the matrix
                    for(int i=0;i<4;i++){
                        for(int j=i;j<4;j++){
                            swap(mat[i][j], mat[j][i]);
                        }
                    }
                    //Reverse each row
                    for(int i=0;i<4;i++){
                       for(int j=0;j<4/2;j++){
                        swap(mat[i][j], mat[i][4-1-j]);
                       }
                    }
                     //display
                     for(int i=0;i<4;i++){
                        for(int j=0;j<4;j++){
                            cout << mat[i][j] << "    ";
                        }
                        cout<< endl;
                     }


return 0;
}
