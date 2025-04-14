#include<iostream>
using namespace std;

int main(){
    int temp;
    int arr[5] = {-2,6,-4,-5,2};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j]>0){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}