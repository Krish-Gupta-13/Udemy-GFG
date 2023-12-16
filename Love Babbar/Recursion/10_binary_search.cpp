#include<iostream>
using namespace std;
bool binarysearch(int *arr, int s, int e, int k, int size){
    //  s = 0;
    //  e = size - 1;
    int mid = (s+e)/2;
    if(s>e)
    return false;

    if(arr[mid] == k)
    return true;
    

    if(arr[mid]<k){
        return binarysearch(arr, mid+1, e, k, size);
    }
    else{
        return binarysearch(arr, s, mid-1, k, size);
    }
}
int main(){
    int arr[100]={};
    int size;
    int k;
    cout<<"Enter the value of size : "<<endl;
    cin>>size;
    cout<<"Enter the array : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int  s = 0;
    int e = size - 1;
    cout<<"Enter the key "<<endl; 
    cin>>k;
    int ans = binarysearch(arr,s ,e, k, size);
    cout<<"Present or not : "<<ans<<endl;

return 0;
}