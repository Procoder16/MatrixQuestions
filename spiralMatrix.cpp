#include<iostream>

using namespace std;

int main(){

    int n,m;

    cout<<"ENTER THE SIZE OF THE MATRIX:";
    cin>>n>>m;

    int a[n][m];

    cout<<"ENTER THE ELEMENTS OF THE MATRIX:";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int row_start = 0, col_start =0, row_end = n-1, col_end = m-1;
    int direction = 0;

    while(row_start <= row_end && col_start <= col_end){

        // for starting row
        if(direction == 0){
           for(int col = col_start; col <= col_end; col++){
            cout<<a[row_start][col]<<" ";
            }
            row_start++;  
        }
       

        // for ending column
        if(direction == 1){
           for(int row = row_start; row <= row_end; row++){
            cout<<a[row][col_end]<<" ";
            }
            col_end--; 
        }
        

        // for ending row
        if(direction == 2){
           for(int col = col_end; col>=col_start; col--){
            cout<<a[row_end][col]<<" ";
            }
            row_end--;
 
        }
        
        // for starting column
        if(direction == 3){
           for(int row = row_end; row >= row_start; row--){
            cout<<a[row][col_start]<<" ";
            }
            col_start++; 
        }
        
        direction = (direction+1)%4;

    }

    return 0;
}