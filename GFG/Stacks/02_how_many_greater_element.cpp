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
int n = 10;
int arr[100000] = {15,13,12,14,16,8,6,4,10,30};
stack<int> s;
s.push(0);
for(int i=0; i<n; i++){
    while(s.empty()==false && arr[s.top()]<=arr[i]){
        s.pop();
    }
    int span = (s.empty())? (i+1) : (i-s.top());
    cout<<span<<" ";
    s.push(i);
}
    cout<<endl;
return 0;
}