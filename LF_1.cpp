#include <iostream>
using namespace std;
class Account{
private:
    string name,gmail,mobile;
    double balance;
public:
    void get_value(string nam,string gm,string phn,double bal){
        name = nam;
        gmail = gm;
        mobile = phn;
        balance = bal;

    }
    void display(){
    cout << "Name --------------- "<< name << endl;
    cout << "Gmail --------------- "<< gmail << endl;
    cout << "Mobile --------------- " << mobile << endl;
    cout << "Balance --------------- "<< balance << endl;
    cout << "                            " << endl;
    cout << "                            " << endl;


    }

};
int main(){
Account obj1,obj2,obj3,obj4,obj5;
obj1.get_value("Mahammad","md@gmail.com","0131237860",6534.878);
obj2.get_value("Taj","taj@gmail.com","0131237860",23.878);
obj3.get_value("mil","mil@gmail.com","0131237860",33.878);
obj4.get_value("lur","lur@gmail.com","0131237860",98.878);
obj5.get_value("taji","taji@gmail.com","0131237860",76.878);
cout << "Account holders informations" << endl;
obj1.display();
obj2.display();
obj3.display();
obj4.display();
obj5.display();

return 0;
}
