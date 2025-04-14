#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "HEllO guys hOW Are You";

    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z') {
            cout << char(a[i] + 32);  // convert to lowercase
        }
        else {
            cout << a[i];  // print as is (either space or already lowercase)
        }
    }

    return 0;
}
