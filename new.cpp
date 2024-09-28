#include <iostream>
using namespace std;

class Factorial{
private:
    int num;
    int facto = 1;
public:
    void get_num(int n){
    num = n;
    }

    void factori(){
        if(num<=0){
            cout << "Negative Number does not have factorial" << endl;
        }
        else{
            for(int i=1;i<=num;i++){
        facto = facto * i;
    }
        }

    }

    void show(){
        if(num>=0){
              cout << "The factorial of " << num << " is " << facto << endl;
        }
    }

};

int main(){
Factorial Taj;
int n;
cout << "Enter the number : ";
cin >> n;
Taj.get_num(n);
Taj.factori();
Taj.show();

return 0;
}
