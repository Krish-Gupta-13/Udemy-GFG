//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int dfs(int r, int c, vector<vector<int>> &grid, int i, int j1, int j2, vector<vector<vector<int>>> &dp){
    if(j1<0 || j2<0 || j1>=c || j2>=c)
        return -1e9;
    if(i==r-1){
        if(j1==j2)
            return grid[i][j1];
        else    
            return grid[i][j1] + grid[i][j2];
    }
    int maxi = -1e9;
    if(dp[i][j1][j2]!=-1)
        return dp[i][j1][j2];
    for(int d1=-1; d1<2; d1++){
        for(int d2=-1; d2<2; d2++){
            int ans = 0;
            if(j1==j2){
                ans = grid[i][j1];
            }
            else{
                ans = grid[i][j1] + grid[i][j2];
            }
            ans = ans + dfs(r,c, grid, i+1, j1+d1, j2+d2, dp);
            maxi = max(maxi, ans);
        }
    }
    return dp[i][j1][j2] = maxi;
}

int main(){
    int r = 3;
    int c = 4;
    vector<vector<int>> grid = {{2,3,1,2}, {3,4,2,2}, {5,6,3,5}};
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, -1)));
    cout<<dfs(r,c,grid, 0, 0, c-1, dp);
return 0;
}