#include<iostream>
using namespace std;
class Vote{
private:
    int age;
public:
    void set_data(int x){
            age = x;
    }
    void voteOrNote(){
    if(age>=18){
        cout << "Yes, you can give vote" << endl;
    }
    else{
        cout<< "No, you can not give vote" << endl;
    }
    }
};
int main(){
Vote Taj,Taj2;
Taj.set_data(12);
Taj.voteOrNote();
Taj2.set_data(18);
Taj2.voteOrNote();

return 0;
}
