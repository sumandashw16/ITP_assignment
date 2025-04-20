#include<iostream>
using namespace std;

void sort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j = i+1;j<size;j++ ){
            if(arr[i]>arr[j]){
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int a;
    cout<<"enter the range of the array:"<<endl;
    cin>>a;
    int arr1[a];
    cout<<"enter inputs of array"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    sort(arr1, sizeof(arr1)/sizeof(arr1[0]));
    return 0;
}