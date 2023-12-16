//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int adjsum(int arr[], int n, int dp[]){
    if(n==0)
        return arr[0];
    if(n<0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int pick = arr[n] + adjsum(arr, n-2, dp);
    int npick = 0 + adjsum(arr, n-1, dp);
    return dp[n] = max(pick, npick);
}
int main(){
  int arr[] = {2,3,4,9};
  int dp[5];
  for(int i=0; i<5; i++){
    dp[i] = -1;
  }
  cout<<adjsum(arr, 3, dp)<<endl;

return 0;
}