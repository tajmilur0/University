#include<iostream>
using namespace std;

int fact(int n){
if(n==0)
    return 1;
else if(n==1)
    return 1;
else
    return n*fact(n-1);

}

int main(){
int f=fact(3);
cout <<"Factorial ----" << f;
return 0;
}
