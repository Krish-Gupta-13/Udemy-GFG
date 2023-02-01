//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
bool isSubArrSum(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        int curr_sum=0;
        for(int j=i; j<n; j++){
            curr_sum=curr_sum+arr[j];
            if(curr_sum==sum){
                return true;
            }
        }
    }
    return false;
}

bool isSubArrSum2(int arr[], int n, int sum){
    unordered_set<int> h;
    int pre_sum=0;
    for(int i=0; i<n; i++){
        pre_sum=pre_sum+arr[i];
        if(pre_sum==sum){
        return true;
        }
        if(h.find(pre_sum-sum)!=h.end()){
        return true;
        }
        h.insert(pre_sum);
    }
    return false;
}
int main(){
ios_base::sync_with_stdio(false);
int arr[]={5,3,2,-1};
// cout<<isSubArrSum(arr, 4,14)<<endl;
cout<<isSubArrSum2(arr,4,4)<<endl;

return 0;
}