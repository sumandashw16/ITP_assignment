#include<iostream>
using namespace std;

int sum_dig(int n){
    if(n==0){
        return 0; 
    }
    return ((n%10) + (sum_dig(n/10)));
}

int main(){
    cout<<sum_dig(2433)<<endl;
    return 0;
}