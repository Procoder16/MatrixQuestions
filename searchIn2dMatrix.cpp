#include<iostream>
using namespace std;

/*
    The naive idea could be:
        > running two for loops and checking for the number but this is very much time consuming, O(n^2)
    Optomised solution : 
        > start from the top right corner of the matrix
        > if the current element is equal to the given number, simply return
        > if the current element is larger than the given number reduce the column number 
        > else, increase the row number    
*/

int main(){

    int n, m;

    cout<<"ENTER THE SIZE OF THE MATRIX:";
    cin>>n>>m;

    int a[n][m];

    cout<<"ENTER THE ELEMENTS OF THE MATRIX IN ASCENDING ORDER:";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int k;
    cout<<"ENTER THE ELEMENT TO SEARCH:";
    cin>>k;

    int r = 0, c = m-1;

    bool flag = false;

    while(r<n && c>=0){
        if(a[r][c] == k){
            flag = true;
            break;
        }

        else if(a[r][c] > k){
            c--;
        }
        else{
            r++;
        }
    }

    if(flag){
        cout<<"NUMBER FOUND IN THE MATRIX!!";
    }
    else{
        cout<<"NUMBER DOESN'T EXIST... TRY FOR A DIFFERENT NUMBER";
    }

    return 0; 


}