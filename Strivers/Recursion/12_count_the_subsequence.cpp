#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int sub(int ind, int s, int sum, int arr[], int n){
    if(ind == n){
    if(sum==s)
    return 1;
    
    else
    return 0;
    }
  sum = sum + arr[ind];
  int l = sub(ind+1, s, sum, arr, n);
  sum = sum - arr[ind];
  int r = sub(ind+1, s, sum, arr, n);
  return l+r; 

}

int main(){
int arr[3]={1,2,1};
int n = 3;
int s = 2;
cout<<sub(0, s, 0, arr, n)<<endl;
return 0;
}