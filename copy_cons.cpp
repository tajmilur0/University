#include<iostream>
using namespace std;

class CopyCons{
private:
    int n;
public:
    CopyCons(){
    n=0;
    }
    CopyCons(int x){
    n=x;
    }
    CopyCons(CopyCons &ob){
        n = ob.n;
    }

    void show(){
    cout << "n = " <<n<<endl;
    }

};
int main(){
    CopyCons Obj;
    Obj.show();
    CopyCons Obj2(21);
    CopyCons Obj3(Obj2);
    Obj3.show();


return 0;
}

