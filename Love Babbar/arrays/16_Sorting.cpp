#include<iostream>
using namespace std;
// void selectionSort(vector<int>&arr, int n)
int main(){
int n=5;
// int arr[5]={3,4,2,6,7};
for(int i=0; i<n-1; i++){
    int arr[5]={3,4,2,6,7};
    int minIndex = 1;
    for(int j=i+1; j<n; j++){
    if(arr[j]<arr[minIndex])
    minIndex = j;
    }
    swap(arr[minIndex], arr[i]);
cout<<arr[1]<<endl;
}
return 0;
}