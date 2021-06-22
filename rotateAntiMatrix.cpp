#include<iostream>
using namespace std;

/*
    The naive approach would be:
        1. create a temp array
        2. traverse through the given array and assign arr[i][j] to temp[n-j-1][i] (because the last column becomes the first row)
        3. print the temp array
        4. This solution will take O(n^2) time and space complexity

    The optimised approach would be:
        1. Transpose the matrix
        2. reverse the columns
        3. This takes O(1) space but the time complexity remains the same     
*/

int main(){

    int m,n;
    cin>>m>>n;

    int arr[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < m; i++){  // transposing the array
        for(int j = 0; j < i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    int startRow = 0;
    int endRow = n-1;

    while(startRow <= endRow){  //reversing the columns
        for(int i = 0; i < m; i++){
            swap(arr[startRow][i], arr[endRow][i]);            
        }
        startRow++;
        endRow--;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}