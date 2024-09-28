#include<iostream>
using namespace std;
class Ternary{
private:
    int x,y,z;
public:
    void set_data(int a,int b, int c){
        x=a;
        y=b;
        z=c;

    }
    int maxi(){
     int max = (x>y) ? ((x>z) ? x:z) : ((y>z) ? y:z);
     return max;
    }
};
int main(){
Ternary Taj;
int x,y,z;
cout << "Enter the value of x,y,z";
cin>>x>>y>>z;
Taj.set_data(x,y,z);
int max = Taj.maxi();
cout << "The maximum is: " << max<<endl;
return 0;
}
