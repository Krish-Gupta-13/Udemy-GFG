#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
// int arr[5]={3,5,32,2,6};
for(int i=0; i<n; i++){
  cin>>arr[i];
}

int key = 3;
int count = 0;
for(int i=0; i<n;i++){
    if(arr[i] == key){
      // return i;
      count = i;
    }
    else{
    count = -1;
    }
}
cout<<count<<endl;
return 0;
}