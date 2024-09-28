#include<iostream>
using namespace std;
class Maxi_array{
    private:
        int arr[100];
        int size;
    public:
        void Set_array(int inp_arr[],int inp_size){
                size = inp_size;
                for(int i=0;i<size;i++){
                    arr[i] = inp_arr[i];
                }
        }

        int maxi(){
            int max = arr[0];
        for(int i=1;i<size;i++){

            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
        }

};
int main(){
int arra[100];
int size;
cout<<"Enter the number of value of the array";
cin>>size;
for(int i=0;i<size;i++){
    cin>>arra[i];
}
Maxi_array Taj;
Taj.Set_array(arra,size);
int max=Taj.maxi();
cout <<"The maximum number is: "<< max<<endl;


}
