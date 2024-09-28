#include<iostream>
using namespace std;
class Taj{
public:
    void dis_Taj(){
    cout <<"I'm from Taj" << endl;
    }
};

class mill : public Taj{
public:
    void dis_mill(){
    cout << "I'm from mill" << endl;
    }
};

class Rah : public mill{
public:
    void dis_rah(){
    cout << "I'm from Rah" << endl;
    }

};

int main()
{
    Rah obj;
    obj.dis_Taj();
   obj.dis_mill();
    obj.dis_rah();

    return 0;
}
