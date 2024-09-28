#include<iostream>

using namespace std;

class AddEven
{

    int number;
    int sum = 0;
public:
    get_number(int n)
    {
        number = n;
    }
    int addEv()
    {
        for(int i=0; i<=number; i++)
        {
            if(i%2 == 0)
            {
                sum = sum + i;
            }
        }
         cout << "The sumation of even number is " << sum << endl;
    }

};

int main()
{
    AddEven Taj;
    int x;
    cout << "Enter the end  number you want to add : ";
    cin >> x;
    Taj.get_number(x);
    Taj.addEv();
    return 0;
}
