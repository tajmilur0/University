#include <iostream>

using namespace std;
class Taj{
private:
    int id = 12;
    string name = "Md Tajmilur Rahman";
public:

    ~Taj(){
     cout << "Distructor invoked" << endl;
     }



};

int main(){
  Taj ob1;

return 0;
}
