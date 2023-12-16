//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int dfs(vector<vector<int>> &points, int ind, int last, vector<vector<int>> &dp){
    if(ind==0){
        int maxi = 0;
        for(int i=0; i<3; i++){
            if(dp[0][i]!=-1)
                return dp[0][i];
            if(i!=last){
                maxi = max(maxi, points[0][i]);
            }
        }
    return maxi;
    }
    if(dp[ind][last]!=-1)
        return dp[ind][last];
    int maxi = 0;
    for(int i=0; i<4; i++){
        if(i!=last){
            int pt = points[ind][i] + dfs(points, ind-1, i, dp);
            maxi = max(maxi, pt);
        }
    }
    return dp[ind][last] = maxi;


}

int main(){
  vector<vector<int>> points = {
    {18,11,19}, {4,13,7}, {1,8,13}
  };
  vector<vector<int>> dp(3, vector<int>(4,-1));
  cout<<dfs(points, 2, 3, dp);
return 0;
}