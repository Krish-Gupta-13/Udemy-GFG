#include<bits/stdc++.h>
using namespace std;
int spiral(int arr[][4], int row, int col){
    // int row = 4;
    // int col = 4; 
//    int row = arr.size();
//    int col = arr[0].size();

   int count = 0;
   int total = row*col;
   int srow = 0;
   int scol = 0;
   int erow = row-1;
   int ecol = col-1; 
//    int erow = row-1;
//    int ecol = col-1;
while(count<total){
    for(int i=scol; count<total && i<=ecol; i++){
        cout<<arr[srow][i]<<" ";
        count++;
    }
    srow++;
    for(int i=srow; count<total && i<=erow; i++){
        cout<<arr[i][ecol]<<" ";
         count++;
    }
    ecol--;
    for(int i=ecol; count<total && i>=scol; i--){
        cout<<arr[erow][i]<<" ";
         count++;
    }
    erow--;
    for(int i=erow; count<total && i>=srow; i--){
        cout<<arr[i][scol]<<" ";
         count++;
    }
    scol++;
}
cout<<endl;
}
int main(){
int arr[4][4];
cout<<"Enter the numbers : "<<endl;
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
spiral(arr, 4, 4);
return 0;
}