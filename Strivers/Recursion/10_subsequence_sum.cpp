#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void subsum(int ind, vector<int> &ds, int arr[],int n, int sum, int s){
    if(ind==n){
        if(sum==s){
            for(auto i:ds){
                cout<<i<<" ";
            }
            cout<<endl;
        }
            return;
    }
    // subsum(ind+1, ds, arr, n, sum, s);
    ds.push_back(arr[ind]);
    sum = sum + arr[ind];
    subsum(ind+1, ds, arr, n, sum, s);
    ds.pop_back();
    sum = sum - arr[ind]; 
    subsum(ind+1, ds, arr, n, sum, s);
    
}
int main(){
int n;
cout<<"Enter the value of n : ";
cin>>n;
int arr[n];
cout<<"Write the array :  ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
// int sum = 2;
int s;
cout<<"Enter the value of s : ";
cin>>s;
vector<int> ds;
subsum(0, ds, arr, n, 0, s);


return 0;
}