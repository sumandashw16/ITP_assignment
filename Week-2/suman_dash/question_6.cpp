#include<iostream>
using namespace std;

int main(){
    int sum = 0, sum_trans=0;
    int arr1[3][3], arr2[3][3], trans1[3][3],trans2[3][3];
    cout<<"give first array input"<<endl;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"give second array input"<<endl;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum = sum + arr1[i][j] + arr2[i][j];
        }
    }

    cout<<"the sum is: "<<sum<<endl;

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        trans1[j][i] = arr1[i][j];
        trans2[j][i] = arr2[i][j];
        }
    }

    cout<<"first matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"first matrix transpose: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<trans1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"second matrix: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"second matrix transpose: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<trans2[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum_trans = sum_trans + trans1[i][j] + trans2[i][j];
        }
    }

    cout<<"the sum is: "<<sum_trans<<endl;
    return 0;
}