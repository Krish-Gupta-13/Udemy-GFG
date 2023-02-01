//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int countsubstr(int arr[], int n, int sum){
    int count = 0;
    if(n==0){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
        // return count;
    }
    return countsubstr(arr, n-1, sum) + countsubstr(arr, n-1, sum-arr[n-1]);
}
//Jda mt soch code krte ja//
int main(){
    int arr[3] = {10,15,10};
    cout<<countsubstr(arr, 3, 25)<<endl;
return 0;
}