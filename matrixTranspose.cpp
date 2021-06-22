#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"ENTER THE SIZE OF THE SQUARE MATRIX:";
    cin>>n;

    int a[n][n];

    cout<<"ENTER THE ELEMENTS OF THE MATRIX:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"ORIGINAL MATRIX:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j], a[j][i]);
        }
    }

    cout<<"\nTRANSPOSED MATRIX:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}