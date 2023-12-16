// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;

// int dfs(vector<vector<int>> &uniquepaths, vector<vector<int>> &dp, int i, int j){
//     if(i==0 && j==0)
//         return 1;
//     if(i<0 || j<0)
//         return 0;
//     if(dp[i][j]!=-1)
//         return dp[i][j];
//     int left = dfs(uniquepaths, dp, i-1, j);
//     int right = dfs(uniquepaths, dp, i, j-1);
//     return dp[i][j] = left + right;
// }

// int main(){
//     vector<vector<int>> uniquepaths;
//     vector<vector<int>> dp(2, vector<int>(2,-1));
//     cout<<dfs(uniquepaths, dp, 1, 1);
// return 0;
// }




//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    vector<vector<int>> uniquepaths;
    vector<vector<int>> dp(2, vector<int>(2));
    // cout<<dfs(uniquepaths, dp, 1, 1);
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(i==0 && j==0)
                dp[i][j] = 1;
            else{
                int left = 0;
                int right = 0;
                if(i>0)
                    left = dp[i-1][j];
                if(j>0) 
                    right = dp[i][j-1];
                dp[i][j] = left + right;
            }
        }
    }
    cout<<dp[1][1]<<endl;
return 0;
}