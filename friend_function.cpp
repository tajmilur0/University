#include<iostream>
using namespace std;

class Taj{
private:
    string taj = "Tajmilur Rahman";
public:
    friend void frnd_function(Taj);
};

void frnd_function(Taj obj){
cout << "The name is "<< obj.taj <<endl;
}

int main(){
Taj obj;
frnd_function(obj);
return 0;
}
