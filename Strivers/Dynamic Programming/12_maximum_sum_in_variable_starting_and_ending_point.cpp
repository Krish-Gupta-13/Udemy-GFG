// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// int dfs(int i, int j, vector<vector<int>> &mat, int n){
//     if(j<0 || j>=n)
//         return -1e9;
//     if(i==0)
//         return mat[0][j];
//     int top = mat[i][j] + dfs(i-1, j, mat, n);
//     int topleft = mat[i][j] + dfs(i-1, j-1, mat, n);
//     int topright = mat[i][j] + dfs(i-1, j+1, mat, n);
//     return max({top, topright, topleft});
// }

// int main(){
//     int n = 4;
//     vector<vector<int>> mat = {{1,4,3,2}, {1,2,5,4}, {1,2,3,2}, {9,2,3,1}};
//     cout<<dfs(3, 3, mat, n)<<endl;
// return 0;
// }


//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int dfs(int i, int j, vector<vector<int>> &mat, int n, vector<vector<int>> &dp){
    if(j<0 || j>=n)
        return -1e9;
    if(i==0)
        return mat[0][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    int top = mat[i][j] + dp[i-1][j];
    int topleft = mat[i][j] + dp[i-1][j-1];
    int topright = mat[i][j] + dp[i-1][j+1];
    return dp[i][j] = max({top, topright, topleft});
}

int main(){
    int n = 4;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    vector<vector<int>> mat = {{1,4,3,2}, {1,2,5,4}, {1,2,3,2}, {9,2,3,1}};
    int maxi = -1e9;
    for(int i=0; i<n; i++){
        maxi = max(maxi, dfs(n-1, i, mat, n, dp));
    }
    cout<<maxi<<endl;
return 0;
}