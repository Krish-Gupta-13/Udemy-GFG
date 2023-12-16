#include<iostream>
using namespace std;
void nonzero(int arr[], int n){
    int m=0;
    for(int i=0; i<5; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[m]);
            m++;
        }
    }
 }
   void print(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main(){
int arr[5]={0,1,0,12,0};
nonzero(arr, 5);
print(arr, 5);
return 0;
}