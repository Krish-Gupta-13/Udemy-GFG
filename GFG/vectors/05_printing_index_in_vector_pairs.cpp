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
void cc(int arr[], int n){
vector<pair<int, int>> v;
         for(int i=0; i<n; i++){ 
        v.pb({arr[i], i});
    }
        sort(v.begin(), v.end());
        for(auto i:v){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
        }
    }

int main(){
ll count = 0;
ll count1 = 0;
// vector<ll> v;
vector<ll> q;
int arr[100000];
int n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cc(arr, n);
return 0;
}