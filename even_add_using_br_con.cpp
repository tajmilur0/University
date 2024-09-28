#include<iostream>
using namespace std;
class EvenClass{
private:
    int n;
    int sum = 0;
public:
    void get_data(int x){
        n=x;
    }
    void EvenAdd(){
        for(int i=0;i<=n;i++){
            if(i%2!=0){
                continue;
            }
            sum=sum+i;
            if(i>=n){
                break;
            }
        }
        cout<<"The sumation is : " << sum<<endl;
    }

};
int main(){
    EvenClass Taj;
    Taj.get_data(10);
    Taj.EvenAdd();
return 0;
}
