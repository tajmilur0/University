#include <iostream>
using namespace std;

class Fibonacci{
private:
    int n,t1=0,t2=1,next = 0;
public:
 void fib(int k){
     n=k;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout << t1 <<",";
            continue;
        }
        if(i==2){
            cout << t2<<",";
            continue;
        }
        next = t1+t2;
        t1=t2;
        t2=next;
        cout << next << ",";
    }
 }

};

int main(){
Fibonacci Taj;
int x;
cout << "Enter the number of item: ";
cin>>x;
Taj.fib(x);
return 0;
}
