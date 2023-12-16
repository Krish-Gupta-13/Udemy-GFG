// //Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;

// bool dfs(int n, int target, vector<int>& arr){
//     if(target==0)
//         return true;
//     if(n==0){
//         if(arr[0]==target)
//             return true;
//         else
//             return false;
//     } 

//     bool not_take = dfs(n-1, target, arr);
//     bool take = false;
//     if(arr[n]<=target)
//         take = dfs(n-1, target-arr[n], arr);
//     return not_take | take;
// }

// int main(){
//     int n = 4;
//     int k = 4;
//     vector<int> arr = {1,2,3,4};
//     cout<<dfs(n-1, k, arr);
// return 0;
// }



//Code bhi krle kitna game khelega//
// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;

// bool dfs(int n, int target, vector<int>& arr, vector<vector<int>> &dp){
//     if(target==0)
//         return true;
//     if(n==0){
//         if(arr[0]==target)
//             return true;
//         else
//             return false;
//     } 
//     if(dp[n][target]!=-1)
//         return dp[n][target];

//     bool not_take = dfs(n-1, target, arr, dp);
//     bool take = false;
//     if(arr[n]<=target)
//         take = dfs(n-1, target-arr[n], arr, dp);
//     return dp[n][target] = not_take | take;
// }

// int main(){
//     int n = 4;
//     int k = 40;
//     vector<vector<int>> dp(n, vector<int>(k+1, -1));
//     vector<int> arr = {1,2,3,4};
//     cout<<dfs(n-1, k, arr, dp);
// return 0;
// }



#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int n = 4;
    int k = 4;
    vector<vector<bool>> dp(n, vector<bool>(k+1, 0));
    vector<int> arr = {1,2,3,4};
    // cout<<dfs(n-1, k, arr, dp);
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }
    dp[0][arr[0]] = true;
    for(int i=1; i<n; i++){
        for(int tar=1; tar<=k; tar++){
            bool nottake = dp[i-1][tar];
            bool take = false;
            if(arr[i]<=tar)
                take = dp[i-1][tar-arr[i]];
            dp[i][tar] = take | nottake;
        }
    }
    return dp[n-1][k];
return 0;
}