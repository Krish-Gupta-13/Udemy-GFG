// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;

// int dfs(int i, int j, vector<vector<int>> &triangle, int n){
//     if(i==n-1)
//         return triangle[n-1][j];
//     int bottomways = triangle[i][j] + dfs(i+1, j, triangle, n);
//     int diagonal = triangle[i][j] + dfs(i+1, j+1, triangle, n);
//     return min(bottomways, diagonal);
// }

// int main(){
//     int n = 4;
//     vector<vector<int>> triangle = {{1}, {1,2}, {1,2,3}, {9,2,3,1}};
//     cout<<dfs(0, 0, triangle, n)<<endl;
// return 0;
// }


// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;

// int dfs(int i, int j, vector<vector<int>> &triangle, int n, vector<vector<int>> &dp){
//     if(i==n-1)
//         return triangle[n-1][j];
//     if(dp[i][j] != -1)
//          return dp[i][j];
//     int bottomways = triangle[i][j] + dfs(i+1, j, triangle, n, dp);
//     int diagonal = triangle[i][j] + dfs(i+1, j+1, triangle, n, dp);
//     return dp[i][j] = min(bottomways, diagonal);
// }

// int main(){
//     int n = 4;
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     vector<vector<int>> triangle = {{1}, {1,2}, {1,2,3}, {9,2,3,1}};
//     cout<<dfs(0, 0, triangle, n, dp)<<endl;
// return 0;
// }


//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std; 
int main(){
    int n = 4;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    vector<vector<int>> triangle = {{1}, {1,2}, {1,2,3}, {9,2,3,1}};
    for(int i=0; i<n; i++){
        dp[n-1][i] = triangle[n-1][i];
    }
    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0; j--){
            int bottomways = triangle[i][j] + dp[i+1][j];
            int diagonal = triangle[i][j] + dp[i+1][j+1];
            dp[i][j] = min(bottomways, diagonal);
        }
    }
    return dp[0][0];
return 0;
}