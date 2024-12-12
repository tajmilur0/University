#include <bits/stdc++.h>
using namespace std;

int main(){
 vector<vector<int>> mat = {
            {1,2,3},
            {4,5,6},
            {7,8,9},
            };
            int temp;
for(int i=0;i<3;i++){
    for(int j=i;j<3;j++){
           // temp = mat[i][j];
           // mat[i][j] = mat[j][i];
            // temp= mat[i][j];
            swap(mat[i][j],mat[j][i]);
    }
}
        for(int i=0;i<3;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
cout << "Tranpose Matrix " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<"     " << mat[i][j] <<"     ";
        }
        cout << endl;
    }
return 0;
}
