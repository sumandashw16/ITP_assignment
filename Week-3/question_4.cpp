#include<iostream>
using namespace std;

int main(){
    int temp=0;
    int k;
    cout<<"enter k: "<<endl;
    cin>>k;
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<k;i++){
        temp = arr[0];
        for(int j=0;j<4;j++){
            arr[j] = arr[j+1];
        }
        arr[4] = temp;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}