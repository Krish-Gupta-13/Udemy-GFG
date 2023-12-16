#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
// int arr1[4]={1,2,3,4};]
int arr1[n]={0,0,0,0};
for(int i=0; i<n; i++){
    cin>>arr1[i];
    
}
//  swap(arr1[3], arr1[2]);
 for(int j=0; j<n; j++){
     cout<<arr1[j]<<" ";
 }
 cout<<endl;
//  cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<" "<<arr1[3]<<" ";
 
return 0;
}