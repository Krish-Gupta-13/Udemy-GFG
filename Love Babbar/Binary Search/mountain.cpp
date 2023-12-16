#include<iostream>
using namespace std;
int mountain(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = (s + e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid + 1; 
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}
int main(){
    int odd[9]={2,4,5,6,9,6,4,2,1};
    cout<<"Mountain : "<<mountain(odd,9)<<endl;

return 0;
}