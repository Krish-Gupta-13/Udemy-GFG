#include<bits/stdc++.h>
using namespace std;
int search(int arr[][4], int target){
    int x = 0;
    int row = 4;
    int col = 4;
    int rowindex = 0;
    int colindex = col-1;
    while(rowindex<row && colindex>=0){
        int element = arr[rowindex][colindex];
        if(element == target){
            return target;
        }
        if(element<target){
            rowindex++;
        }
        else{
            colindex--;
        }
    }
    return x;
}
int main(){
    int x = 0;
    int arr[4][4];
for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cin>>arr[i][j];
    }
}

int target;
cout<<"Enter target : "<<endl;
cin>>target;
int ans = search(arr, target);
cout<<ans<<endl;
return 0;
}