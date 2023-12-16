
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,45,6,5,43,23};
    sort(arr,arr+6,greater<int>());
    for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}