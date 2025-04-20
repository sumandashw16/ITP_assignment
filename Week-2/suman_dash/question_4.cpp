#include<iostream>
using namespace std;

int main(){
    
    int arr[10] = {4,4,4,8,8,2,2,6,3,7};
    int max_element = arr[0];
    int max_count = 0;

    for(int i=0;i<10;i++){
        int count = 0;
        for(int j=0;j<10;j++){
            if(arr[i] == arr[j]){
                count = count+1;
            }
        }
        if(count>max_count){
            max_count = count;
            max_element = arr[i];
        }
    }
    cout<<max_count<<" "<<max_element<<endl;
    return 0;
}