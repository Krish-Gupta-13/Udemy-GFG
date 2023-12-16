#include<bits/stdc++.h>
using namespace std;
int largestsum(int arr[][3], int m, int n){
    int maxi = INT_MIN;
    int rowindex = -1;
    for(int i=0; i<3; i++){
      int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowindex;
}
int main(){
    int arr[3][3];
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
int maxi = largestsum(arr, 3, 3);
cout<<maxi<<endl;

return 0;
}