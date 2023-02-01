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
    list<int> l;
void insert(int x){
    l.pb(x);
}
void print(){
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}
void replacee(int x, vector<int> &v){
    auto it = find(l.begin(), l.end(), x);
    if(it==l.end());
    return;
    it = l.erase(it);
    l.insert(it, v.begin(), v.end());
}
int main(){
ll count = 0;
ll count1 = 0;
vector<ll> v = {20,30,40};
vector<ll> q;
int arr[100000];
list<int> l;
insert(3);
insert(10);
insert(2);
insert(10);
print();
// v = {20,30,40};
// replacee(10, v);
print();
return 0;
}