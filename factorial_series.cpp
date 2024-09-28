#include<iostream>
using namespace std;

class Factorial{
private:
    int n;
    long facto = 1.0;
    public:
    void get_n(int b){
     n=b;
    }
    void fac(){
        if(n<0){
            cout << "Negative number does not have factorial";
        }
        else{
            for(int i= 1;i<=n;i++){
            facto = facto * i;
        }

        }

    }

    void show(){
        if(n>=0){
                cout << "The factorial of " << n <<" is " << facto << endl;

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
Taj.show();

return 0;
}
