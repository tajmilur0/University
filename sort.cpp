#include <iostream>
using namespace std;
#define ARR_SIZE 100

class buble_sort{
private:
int arr[ARR_SIZE];
int arr_size;
public:
    void set_arr(int inp_arr[],int inp_size){
            arr_size = inp_size;
            for(int i=0;i<arr_size;i++){
                arr[i] = inp_arr[i];
            }
    }

    void sort_arr(){
    for(int i=0;i<arr_size;i++){
        for(int j=0;j<arr_size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    }

    void show(){
    cout << "Sorting Result........." <<endl;
    for(int i=0;i<arr_size;i++){
        cout << arr[i] << " " <<endl;
    }
    }
};

int main(){
buble_sort obj;
int inp_size;
cout << "Number of person : ";
cin>>inp_size;
int inp_arr[inp_size];
for(int i=0;i<inp_size;i++){
    cin>> inp_arr[i];
}
obj.set_arr(inp_arr,inp_size);
obj.sort_arr();
obj.show();

return 0;
}
