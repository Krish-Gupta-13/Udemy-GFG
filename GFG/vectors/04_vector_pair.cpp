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
// void cm(pair<int, int> p1, pair<int, int> p2){
//     return p1.second > p2.second;
// }
void cmp(int roll[], int marks[], int n){
vector<pair<int, int>> v;
for(int i=0; i<n; i++){
    v.pb({roll[i], marks[i]});
}
sort(v.begin(), v.end(), greater<>());
    for(int i=0; i<n; i++){
        cout<<v[i].first<<" "<<v[i].second;
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
int roll[100000];
int marks[100000];
for(int i=0; i<n; i++){
    cin>>roll[i];
}
for(int i=0; i<n; i++){
    cin>>marks[i];
}
cmp(roll, marks, n);
return 0;
}