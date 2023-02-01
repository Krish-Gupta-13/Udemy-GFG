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
int main(){
int arr[5]={1,2,3,4,5};
int length = 5;
int index = 1;
// int x = 1;
if(index>=0 && index<=length){
    for(int i=index; i<length-1; i++){
        arr[i]=arr[i+1];
    }
    // arr[index] = 123;
    length--;
}
for(int i=0; i<length; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}