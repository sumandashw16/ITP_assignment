#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"enter the range of first array:"<<endl;
    cin>>a;
    int arr1[a];
    cout<<"enter inputs of array"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }

    cout<<"enter the range of the second array:"<<endl;
    cin>>b;
    int arr2[b];
    cout<<"enter inputs of array"<<endl;
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }

    int arr_merge[a+b];
    for(int i=0;i<a;i++){
        arr_merge[i] = arr1[i];
    }
    for(int j=a;j<a+b;j++){
        arr_merge[j] = arr2[j-a];
    }

    cout<<"merged arrray is:"<<endl;
    for(int i=0;i<a+b;i++){
        cout<<arr_merge[i]<<" ";
    }
    
   
    return 0;
}