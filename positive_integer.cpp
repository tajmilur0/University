#include<iostream>

using namespace std;

class P_Integer{
 private:
     int number;
     int sum = 0;
 public:
    void get_number(int n){
            number = n;
    }
    void add_integer(){
            for(int i=1;i<=number;i++){
                sum = sum+i;
            }
    }
    void show(){
    cout<<"The sumation of 1+2+3+.......+n series is: "<<sum <<endl;
    }

};

int main(){
P_Integer Taj;
int x;
cout << "Enter the value of n: ";
cin>>x;
Taj.get_number(x);
Taj.add_integer();
Taj.show();

return 0;
}
