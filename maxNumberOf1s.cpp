#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int finInd;
	    int ans = -1;
	    
	    bool yes = true;
	    
	    for(int i = 0; i<n; i++){
	       for(int j = 0; j<m; j++){
	           if(arr[i][j]!=0){
	               yes = false;
	           }
	       }
	    }
	    
	    if(yes){
	        finInd = -1;
	        return finInd;
	    }
	    
	    else{
	       for(int i = 0; i<n; i++){
	        int count  = 0;
	        for(int j = 0; j<m; j++){
	            if(arr[i][j] == 1){
	                count++;
	            }
	       }
	       if(count>ans){
	           ans = count;
	           finInd = i;
	           }
	       } 
	    }
	    
	     return finInd;
	}

};

int main(){
    int n,m;
    cout<<"ENTER THE SIZE OF THE MATRIX:\n";
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout<<"ENTER THE ELEMENTS OF THE MATRIX:\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    Solution obj;
    auto ans = obj.rowWithMax1s(arr, n, m);
    cout<< ans << "\n";

    return 0;
}

