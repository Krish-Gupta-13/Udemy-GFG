#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[][4], int target){
//    int x = 0;
   int row = 4;
   int col = 4;
    // row = arr.size();
    // col = arr[0].size();
    int s = 0; 
    int e = row*col - 1;
    int mid = (s+e)/2;
    while(s>=e){
        int element = arr[mid/col][mid%col];
        if(element==target){
            return true;
        }
        if(element<target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;

    }
    return false;

}
int main(){
    // int a, b;
    // cout<<"Enter the values of a and b : "<<endl;
    // cin>>a>>b;
    // int x = 0;
    int arr[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    int bin = binarysearch(arr, target);
    cout<<bin<<endl;
    // if(binarysearch(arr, target)){
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"yesss"<<endl;
    // }

return 0;
}