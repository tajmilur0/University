#include<iostream>

using namespace std;

class Parent{
protected:
    int id_protected;
};

class child: public Parent{
public:
    void setId(int id){
    id_protected = id;
    }
    void displayId(){
    cout << "id_protected is : " << id_protected << endl;
    }
};

int main(){
child obj;
obj.setId(32);
obj.displayId();
return 0;
}
