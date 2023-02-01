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
void perm(char s[], int k){
    static int A[10] = {0};
    static char res[10];
    int i;
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
        for(int i=0; s[i]!='\0'; i++){
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
        }
    }
}
int main(){
char s[]="ABC";
perm(s,0);
return 0;
}