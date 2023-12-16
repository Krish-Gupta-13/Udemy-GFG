#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void printt(int ind, vector<int> &ds, int arr[], int n){
    if(ind==n){
        for(auto i:ds){
            cout<<i<<" ";
        }
        // cout<<endl;
        // return;
    if(ds.size()==0){
        cout<<"{}";
    }
    cout<<endl;
    return;
    }
    ds.push_back(arr[ind]);
    printt(ind+1, ds, arr, n);
    ds.pop_back();
    printt(ind+1, ds, arr, n);
    
    
}
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Write the array :  ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ds;
    printt(0, ds, arr, n);
    return 0;   
}