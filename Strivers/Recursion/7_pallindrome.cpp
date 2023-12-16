#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
bool pali(int arr[], int i, int n){ 
    if(i>=5/2)
    return true; 

    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    return pali(arr, i+1, n);

}
int main(){
int n = 5;
int arr[5]={1,2,3,2,1};
cout<<pali(arr, 0, n)<<endl;
return 0;
}