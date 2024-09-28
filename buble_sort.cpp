#include<iostream>
using namespace std;
#define ARR_SIZE 100
class Sort{
private:
    int arr[ARR_SIZE];
    int size;
public:
    void set_array(int input_arr[],int inp_size){
            size = inp_size;
            for(int i=0;i<size;i++){
                arr[i]=input_arr[i];
            }
    }
    void sort_array(){
            for(int i=0;i<size-1;i++){
                for(int j=0;j<size-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout << arr[i] <<" ";
        }
        cout<<endl;
    }


};
int main(){
    int ar[ARR_SIZE];
    int size;
Sort Taj;
cout<< "Enter size of array: ";
cin>>size;
cout<<"Enter the value of array"<<endl;
for(int i=0;i<size;i++){
    cin>>ar[i];
}
Taj.set_array(ar,size);
Taj.sort_array();
Taj.display();


return 0;
}
