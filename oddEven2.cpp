#include<iostream>

using namespace std;

class OddEv{
 private:
     int number;
     int sum = 0;
 public:
    void get_number(int n){
        number = n;
    }
    void odd_sum(){
      for(int i= 0; i<=number;i++){
        if(i%2 != 0){
            sum = sum +i;
        }
      }
      cout << "The sumation of odd number is " << sum << endl;
    }


};

int main(){
OddEv Taj;
int x;
cout << "Enter the ending point of number: ";
cin>>x;
Taj.get_number(x);
Taj.odd_sum();

return 0;
}
