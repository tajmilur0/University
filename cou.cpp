#include<iostream>
using namespace std;

int main(){
int count = 0;
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(j%2 != 0){
            continue;
        }
        count++;
         if(i==0){
        break;
        }
    }
             if(i==0){
        break;
        }

}
cout << count;
return 0;
}

