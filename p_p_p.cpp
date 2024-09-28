#include <iostream>
using namespace std;
class student{
    private:
int id =0;
string name = "Md Tajmilur Rahman";
    friend void display(student taj);
};
 void display(student taj){
    cout << "My name  is " << taj.name << " and my id is " << taj.id <<endl;
    }
int main(){

student taj;
display(taj);

return 0;
}
