#include <iostream>

using namespace std;

int main(){

    cout<< "For Addition Enter: 1"<<endl;
    cout<< "For Subtraction Enter: 2"<<endl;
    cout<< "For Multiplication Enter: 3"<<endl;
    cout<< "For Division Enter: 4"<<endl;
    cout<< "For Modulus Enter: 5"<<endl;
    int ent,a,b,c;
    cout<< "Enter: ";
    cin>>ent;
    if(ent==1){
     cout << "..................................ADDITION......................................."<<endl;
        cout << "Enter 1st number: ";
     cin >> a;
     cout << "Enter 2nd number: ";
     cin >> b;
     c=a+b;
      cout << "The Addition of "<<a<<" and "<<b << " is: "<<c<< endl;
    }
    else if(ent==2){
         cout << "..................................SUBTRACTION......................................."<<endl;
        cout << "Enter 1st number: ";
     cin >> a;
     cout << "Enter 2nd number: ";
     cin >> b;
     c=a-b;
      cout << "The Subtraction of "<<a<<" and "<<b << " is: "<<c<< endl;
    }

    else if(ent==3){
         cout << "..................................MULTIPLICATION......................................."<<endl;
        cout << "Enter 1st number: ";
     cin >> a;
     cout << "Enter 2nd number: ";
     cin >> b;
     c=a*b;
      cout << "The Multiplication of "<<a<<" and "<<b << " is: "<<c<< endl;
    }

    else if(ent==4){
         cout << "..................................DIVISION......................................."<<endl;
        cout << "Enter 1st number: ";
     cin >> a;
     cout << "Enter 2nd number: ";
     cin >> b;
     c=a/b;
      cout << "The Division of "<<a<<" and "<<b << " is: "<<c<< endl;
    }
    else if(ent==5){
         cout << "..................................Modulus......................................."<<endl;
        cout << "Enter 1st number: ";
     cin >> a;
     cout << "Enter 2nd number: ";
     cin >> b;
     c=a%b;
      cout << "The Modulus of "<<a<<" and "<<b << " is: "<<c<< endl;
    }

    else{
        cout<< "..................You Enter a worng input..................................."<<endl;
    }
}
