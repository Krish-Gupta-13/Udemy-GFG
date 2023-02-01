//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int printCeilingRight(int arr[], int n){
    set<int> s;
    int res[n];
    for(int i=n-1; i>=0; i++){
        auto it=s.lower_bound(arr[i]);
        if(it==s.end()){
            res[i]=-1;
        }
        else{
            res[i]=*it;
        }
        s.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
int arr[]={100,50,30,60,55,32};
printCeilingRight(arr,6);
return 0;
}