#include<iostream>
using namespace std;

int main(){
    int arr[9] = {4,4,4,8,8,2,2,6,7};
    int second_smallest = arr[0];
    for(int i=0;i<10;i++){
        for(int j = i+1;j<10;j++ ){
            if(arr[i]>arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for(int i=0;i<10;i++){
        if(arr[i] == arr[0]){
            cout<<"";
        }
        else{
            second_smallest = arr[i];
            break;
        }
    }
    cout<<second_smallest<<endl;
    return 0;
}