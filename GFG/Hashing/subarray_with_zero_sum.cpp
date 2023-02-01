//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
bool subarray(int arr[], int n){
    unordered_set<int> h;
    int pre_sum=0;
    for(int i=0; i<n; i++){
        pre_sum=pre_sum+arr[i];
        if(h.find(pre_sum)!=h.end())
        return true;
        if(pre_sum==0)
        return true;
        h.insert(pre_sum);
    }
    return false;
}
int main(){
ios_base::sync_with_stdio(false);
int arr[]={111,4,11,-1,11};
cout<<subarray(arr, 5)<<endl;;

return 0;
}