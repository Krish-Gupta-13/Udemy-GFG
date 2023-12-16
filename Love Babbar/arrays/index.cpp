#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2; 
    while(start <= end ){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1; 
        }
        else{
            end = mid - 1; 
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main(){
    int evenIndex[6]={3,4,6,54,34,33};
    int oddIndex[5]={4,5,14,23,29};
    int even = binarysearch(evenIndex,6,3);
    cout<<"The index of the number  is : "<<even<<endl;
    int odd = binarysearch(oddIndex,5,23);
    cout<<"The index of the number : "<<odd<<endl;


return 0;
}