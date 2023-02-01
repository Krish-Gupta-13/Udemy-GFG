//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int maxlon(int arr[], int n, int sum){
    unordered_map<int, int> m;
    int pre_sum=0;
    int res=0;
    for(int i=0; i<n; i++){
        pre_sum=pre_sum+arr[i];
        if(pre_sum==sum){
            res=i+1;
        }
        if(m.find(pre_sum)==m.end()){
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum)!=m.end()){
            res=max(res,i-m[pre_sum-sum]);
        }
    }
    return sum;
}
int main(){
ios_base::sync_with_stdio(false);
int arr[]={8,3,1,6,-6,6,2,2};
cout<<maxlon(arr,8,4)<<endl;
return 0;
}