#include<bits/stdc++.h>
using namespace std;
bool search(int arr[][3], int element, int n, int m){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==element){
                // cout<<"yes"<<endl;
                // return 1;
                return 1;
            }
        }
    }
    // cout<<"No"<<endl;
    return 0;
}
int main(){
int arr[3][3];
cout<<"Enter the array elements :"<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
   cout<<endl;
}
int element;
cout<<"Enter the element you want to search :"<<endl;
cin>>element;

if(search(arr,element,3,3)){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
// cout<<"The element is present or not :"<<xyz<<endl;
return 0;
}