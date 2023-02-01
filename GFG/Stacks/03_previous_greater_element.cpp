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
int n = 5;
int arr[5] = {20,30,10,5,15};
stack<int> s;
s.push(arr[0]);
cout<<-1<<" ";
for(int i=1; i<n; i++){
    while(s.empty()==false && s.top()<=arr[i])
    s.pop();
    int pg = (s.empty()) ? -1 : s.top();
    cout<<pg<<" ";
    s.push(arr[i]);
}
cout<<endl;

return 0;
}