#include<iostream>
using namespace std;
class Number{
int n;

public:
    Number(){
        n=0;
    }
    Number(int k){
            n=k;
    }

    Number(Number &j){
        n=j.n;
    }

    void show(){
    cout << "N == " << n << endl;

    }


};

int main(){
    Number obj;
    obj.show();
Number obj1(33);
obj1.show();
Number obj2(obj1);
obj2.show();

return 0;
}
