#include<iostream>
using namespace std;

class Factorial{
private:
    int n;
    public:
    void get_n(int b){
     n=b;
    }
    void fac(){
        for(int j = 0;j<n;j++){
               long facto = 1.0;
            for(int i= 1;i<=j;i++){
            facto = facto * i;
        }
          cout << facto << ",";
        }

    }
};

int main(){
Factorial Taj;
int x;
cout << "Enter the number: ";
cin>>x;
Taj.get_n(x);
Taj.fac();


return 0;
}
