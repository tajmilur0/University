#include<iostream>
using namespace std;
class Maximum{
private:
    int x,y,z;
public:
    void set_data(int a, int b, int c){
     x=a;
     y=b;
     z=c;
    }
    void maxi(){
        int max = (x>y) ? ((x>z) ? x :  z) : ((y>z) ? y :z);
        cout << max;
    }

};

int main(){
Maximum Taj;
Taj.set_data(12,13,88);
Taj.maxi();
return 0;
}
