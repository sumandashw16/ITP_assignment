#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string word = "he%%llo*w#2o56rld";
    for(int i=0;i<word.length();i++){
        if((int(word[i])>=65 && int(word[i])<=90) || (int(word[i])>=97 && int(word[i])<=122)){
        }
        else{
            word.erase(i,1);
            i=i-1;
        }
    }
    cout<<word<<endl;
    return 0;
}