#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void sp(int arr[], int l, int r){
    if(l>=r){
    return;
    }
    sp(arr, l+1, r-1);
    swap(arr[l], arr[r]);

}
int main(){
int n = 5;
int arr[5]={1,2,3,4,5};
sp(arr, 0, n-1);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}