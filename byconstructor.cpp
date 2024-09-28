#include<iostream>
using namespace std;

class Fibo{
  private:
      int n;
      int t1=0,t2=1,next = 0;
  public:

     Fibo(int number){
        n=number;
        for(int i=1; i<=n;i++){
             if(i==1){
            cout << t1 <<",";
            continue;
        }
        if(i==2){
            cout << t2 << ",";
            continue;
        }
        next = t1+t2;
        t1= t2;
        t2 = next;
        cout << next << ",";
        }
    }

};

int main(){
int number;
cout << "Enter the number of terms for the Fibonacci series: ";
cin >>number;
Fibo obj(number);


return 0;
}
