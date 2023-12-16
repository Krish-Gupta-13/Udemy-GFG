#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = (s + e)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = (s + e)/2;
    }
    return s;
 }
int main(){
 int even[6]={6,7,8,2,3,7};
 cout<<pivot(even,6)<<endl;
return 0;
}