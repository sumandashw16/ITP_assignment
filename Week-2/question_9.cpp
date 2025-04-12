#include<iostream>
using namespace std;

void array_elements(int arr[],int i,int size){
    if(i<size){
        cout<<arr[i]<<" ";
        array_elements(arr,i+1,size);
    }
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    array_elements(arr,0,5);
   
    return 0;
}