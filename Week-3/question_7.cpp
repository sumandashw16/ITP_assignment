#include<iostream>
using namespace std;

int main(){
    char remove;
    cin>>remove;
    string s = "scuderiaferrari";

    for(int i=0;i<s.size();i++){
        if(s[i]==remove){
            s.erase(i,1);
        }
    }

    cout<<s<<endl;
    return 0;
}