#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
bool sub(int ind, vector<int> &ds, int arr[], int n, int sum, int s){
    // bool flag = false;
    if(ind == n){
        if(sum==s){
            for(auto i:ds){
                cout<<i<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    sum = sum + arr[ind];
    if(sub(ind+1, ds, arr, n, sum, s)==true){
        return true;
    }
    ds.pop_back();
    sum = sum - arr[ind];
    if(sub(ind+1, ds, arr, n, sum, s)==true){
        return true;
    }
    return false;
}

int main(){
int n = 4;
int sum;
int s = 5;
int arr[4]={1,2,3,4};
vector<int> ds;
sub(0, ds, arr, n, 0, s);
return 0;
}