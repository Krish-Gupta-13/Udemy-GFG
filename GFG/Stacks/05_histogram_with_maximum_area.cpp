//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
//Jda mt soch code krte ja//

// NAIVE SOLUTION


int getmaxarea(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        int curr = arr[i];
        for(int j=i-1; j>=0; j--){
            if(arr[i]<=arr[j]){
                curr = curr+arr[i];
            }
            else{
                break;
            }
        }
        for(int j=i+1; j<n; j++){
            if(arr[i]<=arr[j]){
                curr= curr + arr[i];
            }
            else{
                break;
            }
        }
        count = max(count,curr);
    }
    return count;

}
int main(){
    int n=7;
    int arr[7]={6,2,5,4,1,5,6};
    cout<<getmaxarea(arr,n)<<endl;

return 0;
}