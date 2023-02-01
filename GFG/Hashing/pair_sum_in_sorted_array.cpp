//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int isPair(int a[], int n, int sum){
    unordered_set<int> us;
    for(int i=0; i<n; i++){
        if(us.find(sum-a[i]!=us.end())){
            return 1;
        }
    }
    return 0;
}
int main(){
ios_base::sync_with_stdio(false);
int a[6]={3,8,4,7,6,1};
int n=6;
int sum = 14;
cout<<isPair(a,n,sum);
return 0;
}