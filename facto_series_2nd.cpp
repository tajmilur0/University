#include<iostream>
using namespace std;
class Factorial{
private:
    int n;
public:
    void set_data(int x){
        n=x;
    }
    void facto(){
    for(int i=0;i<n;i++){
        long factori = 1.0;
        for(int j=1;j<=i;j++){
            factori = factori * j;
        }
        cout << factori << " ";
    }
    }
};
int main(){
Factorial Taj;
Taj.set_data(8);
Taj.facto();
return 0;
}
