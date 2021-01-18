#include<iostream>

using namespace std;

int main(){

    int n,m;
    cout<<"ENTER THE SIZE OF THE MATRIX:";
    cin>>n>>m;

    int a[n][m];

    cout<<"ENTER THE ELEMENTS OF THE MATRIX:";
    for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
            cin>>a[i][j];
        }
    }

    int k;
    cout<<"ENTER THE ELEMENT TO SEARCH:";
    cin>>k;

    bool found = false;

    int r = 0, c = m-1;
    while(r<n && c>=0){
        if(a[r][c] == k){
            found = true;
            break;
        }

        else if(a[r][c] > k){
            c--;
        }

        else{
            r++;
        }
    }

    if(found){
        cout<<"THE ELEMENT WAS FOUND IN THE GIVEN MATRIX!";
    }
    else{
        cout<<"ELEMENT NOT FOUND!!";
    }

    return 0;
}