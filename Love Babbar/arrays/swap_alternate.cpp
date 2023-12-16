#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

}
void reverse(int arr[], int n){
    // int start=0;
    // int end=n-1;
    for(int i=0; i<n;i+=2)
    if(i+1<n){
        swap(arr[i],arr[i+1]);
        // start++;
        // end--;
    }
    
}
int main(){
int arr[5]={1,2,3,4,5};
int brr[8]={1,2,3,4,5,6,7,8};
reverse(arr,5);
reverse(brr,8);
printarray(arr,5);
printarray(brr,8);
return 0;
}