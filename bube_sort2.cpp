#include<iostream>
using namespace std;
#define ARR_SIZE 100

class buble{
private:
    int arr[ARR_SIZE];
    int size;
public:
    void set_arr(int inp_arr[],int inp_size){
            size = inp_size;
            for(int i=0;i<size;i++){
                arr[i]=inp_arr[i];
            }
    }
    void sort_arr(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    void show(){
    for(int i =0;i<size;i++){
        cout << arr[i] <<" ";
    }
    }

};

int main(){
buble Taj;
int arra[6] = {3,27,4,66,1,6};
int size = 6;
Taj.set_arr(arra,size);
Taj.sort_arr();
Taj.show();
}
