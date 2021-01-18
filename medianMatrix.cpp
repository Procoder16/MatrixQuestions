
#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> a;
        
        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                a.push_back(matrix[i][j]);
            }
        }
        
        sort(a.begin(), a.end());
        
        int t = a.size();
      
        return a[t/2];
    
    }
};

int main(){

    int r,c;
    cout<<"ENTER THE SIZE OF THE VECTOR:\n";
    cin>>r>>c;

    vector<vector<int>> matrix(r, vector<int>(c));
    cout<<"ENTER THE ELEMENTS OF THE VECTOR:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>matrix[i][j];
        }
    }
    Solution obj;
    cout<<"\nMEDIAN:"<<obj.median(matrix, r, c)<<endl;

    return 0;
}