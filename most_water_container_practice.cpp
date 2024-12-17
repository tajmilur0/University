#include<iostream>
using namespace std;

int main(){
int mat[9] = {1,8,6,2,5,4,8,3,7};
int most = 0;
int area;
for(int i=0;i<9;i++){
    for(int j=1;j<9;j++){
        if(mat[i] < mat[j]){
            area = mat[i]*(j-i);
        }
        else{
                area = mat[j]*(j-i);
        }
        if(most<area){
            most = area;
        }
    }
}

cout << most << endl;


return 0;
}
