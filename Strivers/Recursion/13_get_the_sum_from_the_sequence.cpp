#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void find(int ind, int target, int arr[], vector<vector<int>> &ans, vector<int> &ds){
    if(ind == 5){
        if(target == 0){
            ans.push_back(ds);
        }
        // for(vector<int> j:ans){
        for(auto i:ds){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
        // }
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        find(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
    }
    find(ind+1, target, arr, ans, ds);
}
int main(){
int n = 5;
int arr[5] = {2,3,9,7,10};
vector<vector<int>> ans;
vector<int> ds;
int target = 7;
find(0, target, arr, ans, ds);
return 0;
}