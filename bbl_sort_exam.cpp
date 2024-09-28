#include<iostream>
#define ARR_SIZE 100
using namespace std;

class bubble{
private:
    int n;
    int arr[ARR_SIZE];
public:
    void get_value(int inp_arr[],int inp_n){
            n=inp_n;
            for(int i=0;i<n;i++){
               arr[i] = inp_arr[i];
            }

    }

    void bbl_sort(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    void display(){
        cout << "Sorted ages: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    }

};

int main(){
bubble obj;
int inp_n;
cout << "Number of person(N): ";
cin>>inp_n;
int inp_arr[inp_n];
cout <<"Ages: ";
for(int i=0;i<inp_n;i++){
    cin>>inp_arr[i];
}
obj.get_value(inp_arr,inp_n);
obj.bbl_sort();
obj.display();

return 0;
}
