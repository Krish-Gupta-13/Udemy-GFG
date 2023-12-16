#include<bits/stdc++.h>
using namespace std;
int rotate(int arr[][3], int row, int col){
   int count = 0;
   int total = row*col;
   int srow = 0;
   int scol = 0;
   int erow = row-1;
   int ecol = col-1;
   while(count<total){ 
    for(int i=srow; count<total && i<=erow; i++){
        cout<<arr[i][ecol]<<" ";
        count++;
     }
    erow--;
   }
    cout<<endl;
}
int main(){
int arr[3][3];
cout<<"Enter the numbers : "<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
rotate(arr, 3, 3);
return 0;
}