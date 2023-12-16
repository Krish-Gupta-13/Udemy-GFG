// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;

// int dfs(vector<vector<int>> &grids, int i, int j, vector<vector<int>> &dp){
//     if(i==0 && j==0)
//         return grids[i][j];
//     if(i<0 || j<0)
//         return 1e9;
//     if(dp[i][j]!=-1)
//         return dp[i][j];
//     int up = grids[i][j] + dfs(grids, i-1, j, dp);
//     int left = grids[i][j] + dfs(grids, i, j-1, dp);
//     return dp[i][j] = min(up, left);
// }

// int main(){
// vector<vector<int>> grid = {
//     {1,1}, {3,1}
// };
// vector<vector<int>> dp(2, vector<int>(2, -1));
// cout<<dfs(grid, 1, 1, dp);
// return 0;
// }

//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
vector<vector<int>> grid = {{1,1}, {3,1}};
vector<vector<int>> dp(2, vector<int>(2, 0));
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==0 && j==0)
                dp[i][j] = grid[i][j];
            else{
                int up = grid[i][j];
                if(i>0){
                    up = up + dp[i-1][j];
                }
                else{
                    up = up + 1e9;
                }
                int left = grid[i][j];
                if(j>0){
                    left+=dp[i][j-1];
                }
                else{
                    left+=1e9;
                }
            dp[i][j] = min(left, up);
            }
        }
    }
    cout<<dp[1][1];
// cout<<dfs(grid, 1, 1, dp);
return 0;
}

