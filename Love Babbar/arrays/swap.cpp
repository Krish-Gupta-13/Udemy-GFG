#include<iostream>
using namespace std;
void printarray(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" "; 
   }
   cout<<endl;
}
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
int arr[6]={4,3,5,6,2,1};
int brr[5]={1,2,3,4,5};
reverse(arr,6);
reverse(brr,5);
printarray(arr,6);
printarray(brr,5);
return 0;
}