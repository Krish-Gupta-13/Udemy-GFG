//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

bool dfs(vector<int> &v, int n, int k){
    if(k==0)
        return true;
    if(n==0)
        return (v[0]==k);

    bool not_take = dfs(v, n-1, k);
    bool take = false;
    if(k>=v[n])
        dfs(v, n-1, k-v[n]);
    return take | not_take;
}

bool dfs1(vector<int> &v, int n){
    int totalsum = 0;
    for(int i=0; i<n; i++){
        totalsum+=v[i];
    }
    if(totalsum%2!=0)
        return false;
    return dfs(v, n, totalsum/2);
}

int main(){
    int n = 4;
    vector<int> v = {2,1,3,4};
    cout<<dfs1(v, n)<<endl;
return 0;
}