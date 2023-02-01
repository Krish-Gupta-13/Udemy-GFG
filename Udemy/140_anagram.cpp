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
char A[] = "medical";
char B[] = "decimal";
int H[26] = {0};
for(int i=0; A[i]!='\0'; i++){
    H[A[i]-97]+=1;
}
for(int i=0; B[i]!='\0'; i++){
    H[A[i]-97]-=1;
    if((H[A[i]-97])<0){
        printf("Not a anagram");
        cout<<endl;
        break;
    }
if(B[i]=='\0'){
    cout<<"Its a anagram"<<endl;
}
}
return 0;

}