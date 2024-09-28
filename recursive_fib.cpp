#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

int main(){
    int term;
    cout<<"Enter the number of term : ";
    cin>>term;
for(int i=0;i<term;i++){
    cout<< fibo(i)<< " ";
}
return 0;
}
