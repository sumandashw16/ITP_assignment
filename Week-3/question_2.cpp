#include<iostream>
using namespace std;

int main(){
    int alphabet=0, symbol=0, number=0;
    string word = "A1b@9Z#x! hufe67%%hdf34";
    for(int i=0; i<word.length(); i++){
        if((int(word[i])>32 && int(word[i])<=47) || (int(word[i])>=58 && int(word[i])<=64) || (int(word[i])>=91 && int(word[i])<=96 || (int(word[i])>=123 && int(word[i])<=126))){
            symbol++;
        }
        if((int(word[i])>=48 && int(word[i])<=57)){
            number++;
        }
        if((int(word[i])>=65 && int(word[i])<=90) || (int(word[i])>=97 && int(word[i])<=122)){
            alphabet++;
        }
    }
    cout<<"alphabets: "<<alphabet<<endl<<"numbers: "<<number<<endl<<"special chars: "<<symbol<<endl;
    return 0;
}