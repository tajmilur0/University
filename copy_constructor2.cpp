#include<iostream>

using namespace std;

class Number{

private:
    int n;
public:
    Number(){
     n=0;
    }
    Number(int k){
      n=k;
    }
    Number(Number &j){
            n = j.n;
    }

    void show(){
    cout << "N = " << n << endl;
    }
};

int main(){
    Number Taj;
    Taj.show();
    Number Taj2(99);
    Taj2.show();
    Number Taj3(Taj2);
    Taj3.show();
return 0;
}
