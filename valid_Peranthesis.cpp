#include <iostream>
#include<string>
using namespace std;
bool Isvalid(string taj)
{
    double first=0;
    double second=0;
    double third=0;

    for(int i=0; i<taj.length(); i++)
    {
        char chr = taj[i];
        if(chr=='(')
        {
            first++;
        }
        else if(chr==')')
        {
            first--;

        }
        else if(chr=='{')
        {
            second++;
        }
        else if(chr=='}')
        {
            second--;
        }
        else if(chr == '[')
        {
            third++;
        }
        else if(chr==']')
        {
            third--;
        }
        if(first<0 || second<0|| third<0)
        {
            return false;
        }


    }
    return (first==0 && second == 0 && third == 0);

}
int main()
{
string paren;
cout << "Enter Parentheses: ";
cin >> paren;
if(Isvalid(paren)){
    cout << "True";
}
else{
    cout <<"False";
}

    return 0;
}
