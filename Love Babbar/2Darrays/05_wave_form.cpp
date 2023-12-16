#include<bits/stdc++.h>
using namespace std;
int waveform(int arr[][4], int n, int m){
//    for(int i=0; i<4; i++){
    cout<<endl;
       for(int j=0; j<4; j++){
           if(j&1){
                 for(int i=0; i<4; i++){
                   cout<<arr[i][j]<<" ";
            //    for(int i=3; i>=0; i--){
            //        cout<<arr[i][j]<<" ";
               }
           cout<<endl;
           }
           else{
               for(int i=3; i>=0; i--){
                   cout<<arr[i][j]<<" ";
            //    for(int i=0; i<4; i++){
            //        cout<<arr[i][j]<<" ";
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