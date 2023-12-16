#include<iostream>
using namespace std;
void rotatedarray(int arr[], int n){
    int temp[4]={};
   
    for(int i=0; i<4; i++){
        int temp[4]={};
         int k=2;
        temp[(i+k)%4]=arr[i];
    }
    arr = temp;
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[4]={1,2,3,4};
rotatedarray(arr,4);
print(arr,4);
return 0;
}