#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;
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
    int even[7]={6,7,8,9,2,3,5};
    cout<<"Pivot is : "<<pivot(even,7)<<endl;
    
return 0;
}


