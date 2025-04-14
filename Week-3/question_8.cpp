#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "jack";
    int count = 0;
    string m;
    for(int i =0;i<s.size();i++){
        if(s[i]==s[s.size()-1-i]){
            count++;
        }
    }
    if(count==s.size()){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}