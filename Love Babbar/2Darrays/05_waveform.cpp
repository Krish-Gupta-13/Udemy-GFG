#include<bits/stdc++.h>
using namespace std;
int waveform(int arr[][4], int n, int m){
//    for(int i=0; i<4; i++){
    cout<<endl;
       for(int i=0; i<4; i++){
           if(i&1){
               for(int j=3; j>=0; j--){
                   cout<<arr[i][j]<<" ";
               }
           cout<<endl;
           }
           else{
               for(int j=0; j<4; j++){
                   cout<<arr[i][j]<<" ";
               }
           cout<<endl;
           }
       }
//    }
}
int main(){
int arr[4][4];
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cin>>arr[i][j];
    }
}

waveform(arr, 4, 4);

return 0;
}