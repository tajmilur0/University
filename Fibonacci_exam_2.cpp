#include<iostream>
using namespace std;

class Fibo{
private:
    int n;
    int t1=0,t2=1,next;
public:
    void fib(){
        cout <<"Enter the number of terms: ";
        cin>>n;
        for(int i=0;i<=n;i++){
            if(i==0){
                cout << t1 <<" ";
                continue;
            }
            if(i==1){
                cout << t2 <<" ";
                continue;
            }
            next = t1+t2;
            t1=t2;
            t2=next;
            cout << next<< " ";
        }
    }


};

int main(){
Fibo obj;
obj.fib();
return 0;
}
