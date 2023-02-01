#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v;
vector<ll> q;
int arr[8] = {5,15,10,8,6,12,9,18};
int n = 8;
stack<int> s;
s.push(arr[n-1]);
// cout<<-1<<" ";
for(int i=n-1; i>=0; i--){
    while(s.empty()==false && s.top()<=arr[i])
    s.pop();
    int nextgreater = (s.empty()) ? -1 : s.top();
    // cout<<nextgreater<<" ";
    v.push_back(nextgreater);
    s.push(arr[i]);
}
cout<<endl;
reverse(v.begin(), v.end());
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}
