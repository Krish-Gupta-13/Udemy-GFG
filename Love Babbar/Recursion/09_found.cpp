#include<iostream>
using namespace std;
bool found(int *arr, int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart = found(arr+1, size-1, key);
        return remainingPart;
    }
}
int main(){
int arr[100] = {};
int size;
cout<<"Enter the value of size : "<<endl;
cin>>size;
cout<<"Fill the inputs of array : "<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the value of key : "<<endl;
cin>>key;
bool ans = found(arr, size, key);
if(ans){
    cout<<"The number is present "<<endl;
}
else{
    cout<<"The number is not present "<<endl;
}
return 0;
}