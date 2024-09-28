#include<iostream>
using namespace std;
class Facto{
public:

    int fact(int n){
    if(n==1)
        return 1;
    else
        return n * fact(n-1);
    }
};

int main(){
    Facto Taj;
    int factorial = Taj.fact(4);    cout<<factorial;
return 0;
}
