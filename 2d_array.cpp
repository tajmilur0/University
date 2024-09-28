#include<iostream>
using namespace std;
class arra{
private:
    int arr[3][3];
public:
    void get_value(){
        cout <<"Enter the values: " << endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << "arr["<<i<<"]["<<j<<"]" <<" = " ;
                cin>>arr[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << arr[i][j] << endl;
            }
        }
    }

};

int main(){
arra obj;
obj.get_value();
obj.display();

return 0;
}


