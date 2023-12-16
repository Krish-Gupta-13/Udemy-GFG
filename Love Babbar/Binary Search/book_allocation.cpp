#include<iostream>
using namespace std;
int ispossible(int arr, int n, int m, int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0; i<n; i++){
        if(pagesum+arr[i]<=mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int main(){

return 0;
}