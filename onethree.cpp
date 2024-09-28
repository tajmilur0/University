#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

class OneThree{
private:
    int item;
public:
    void set_data(int x){
        item = x;
    }
    void series(){
        for(int i=0;i<item;i++){
            int number = pow(3,i);
            cout<< number << " ";
        }
    }

};

int main(){
OneThree Taj;
Taj.set_data(8);
Taj.series();
return 0;
}
