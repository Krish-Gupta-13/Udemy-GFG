//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
bool mycomp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second>p2.second;
}

int SortFreq(int arr[], int n){
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    vector<pair<int,int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), mycomp);
    int i=0; 
    for(auto x:v){
        for(int j=0; j<x.second; j++){
            arr[i++]=x.first;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
ios_base::sync_with_stdio(false);
int arr[]={10,5,20,10,10,5,20};
int n=7;
SortFreq(arr, n);

return 0;
}