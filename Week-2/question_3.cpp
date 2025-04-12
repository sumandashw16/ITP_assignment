#include<iostream>
using namespace std;

void copy(int arr[], int size){
    int copy_arr[size];
    for(int i=0;i<size;i++){
        copy_arr[i] = arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<copy_arr[i]<<" ";
    }
}

int main(){
    int a;
    cout<<"enter the range of the array:"<<endl;
    cin>>a;
    int arr1[a];
    int arr2[a];
    cout<<"enter inputs of array"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    copy(arr1, sizeof(arr1)/sizeof(arr1[0]));
    return 0;
}