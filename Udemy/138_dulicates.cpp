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
char ch[]="findings";
int H[26];
for(int i=0; ch[i]!='\0'; i++){
    H[ch[i]-97]+=1;
}
for(int i=0; i<26; i++){
    if(H[i]>1){
        // cout<<i+97<<endl;
        // cout<<H[i]<<endl;
        printf("%c",'a'+i);
        // cout<<'i'+'a';
        cout<<endl;

    }
}
return 0;
}