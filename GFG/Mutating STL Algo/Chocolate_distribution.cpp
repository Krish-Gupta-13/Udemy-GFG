//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int ChocolateDistribution(int arr[], int n, int m){
    sort(arr,arr+n);
    int mini=INT_MAX;
    for(int i=0; i<n-m; i++){
        mini=min(mini,arr[i+m-1]-arr[i]);
    }
    return mini;
}
int main(){
ios_base::sync_with_stdio(false);
// int arr[]={7,3,2,4,9,12,56};
// int n=7;
// int m=3;
int arr1[]={3,4,1,9,56,7,9,12};
int n=8;
int m=5;
cout<<ChocolateDistribution(arr1,n,m)<<endl;
return 0;
}