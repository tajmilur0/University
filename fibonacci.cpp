#include <iostream>
using namespace std;
class fibonacci{
private:
    int num;
public:
    void get_num(int n){
    num =n;
    }
    void fibon(){
    int t1=0,t2=1,next;
    for(int i=0;i<=num;i++){
        if(i == 0){
            cout << t1 << ",";
            continue;
        }
         if(i == 1){
            cout << t2 << ",";
            continue;
        }
        next = t1+t2;
        t1=t2;
        t2=next;
        cout << next << ",";
    }
    }

};

int main(){
fibonacci Taj;
Taj.get_num(50);
Taj.fibon();
return 0;
}
