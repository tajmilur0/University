#include<iostream>
using namespace std;

class C_constructor{
private:
    int n;
public:
    C_constructor(){
        n=0;
    }
    C_constructor(int x){
    n=x;
    }
    C_constructor(C_constructor &obj){
        n=obj.n;
    }
    void show(){
    cout << "N == " << n <<endl;
    }

};

int main(){
C_constructor Taj;
Taj.show();
C_constructor Taj2(21);
C_constructor Taj3(Taj2);
Taj3.show();
return 0;
}
