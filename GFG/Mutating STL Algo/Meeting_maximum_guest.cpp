//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int MaxGuest(int arr[], int dep[], int n){
    sort(arr, arr+n);
    sort(dep, dep+n);
    int i=1, j=0, res=1, curr=1;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res=max(res,curr);
    }
    return res;
}
int main(){
ios_base::sync_with_stdio(false);
int arr[]={900,600,700};
int dep[]={1000,800,730};
int n = 3;
cout<<MaxGuest(arr,dep,n)<<endl;
return 0;
}