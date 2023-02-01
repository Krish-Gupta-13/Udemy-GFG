//------------------Code bhi krle kitna game khelega---------------------------//
#include<bits/stdc++.h>
#include<iomanip>
#include<stdio.h>
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
//-----------------------Jada mt soch code krte ja------------------------------//
int main(){
char A[]="findings";
int H = 0; 
int x = 0;
for(int i=0; A[i]!='\0'; i++){
    x = 1;
    x = x<<(A[i]-97);
    if((x&H)>0){
        cout<<A[i]<<endl;
    }
    else{
        H = x|H;
    }
}
return 0;
}