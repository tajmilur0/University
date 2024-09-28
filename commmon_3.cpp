#include<iostream>
#include<cmath>
using namespace std;

class common3
{
private:
    int number;
    int sum = 0;
public:
    void get_number(int n)
    {
        number = n;

    }
    void add_common()
    {

        for(int i=0; i<number; i++)
        {
            sum = sum + pow(3,i);
        }
    }



    void show()
    {
        cout<<"The sumation of 1+3+9+27+............+n =: " <<sum<<endl;
    }

};

int main()
{
    common3 Taj;
    int x;
    cout<< "Enter the value of n: ";
    cin >> x;
    Taj.get_number(x);
    Taj.add_common();
    Taj.show();
    return 0;
}
