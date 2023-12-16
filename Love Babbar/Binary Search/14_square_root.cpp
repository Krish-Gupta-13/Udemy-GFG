#include<iostream>
using namespace std;
int binarysearch(int n){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = (s + e)/2;
    while(s<=e){
       int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    return e;
}
double moreprecision(int n, int precision , int sqrt){
 int factor = 1;
 int ans = sqrt;
 for(int i=0; i<precision; i++){
     factor = factor/10;
     for(double j=ans; j*j<n; j=j+factor){
         ans = j;
     }
 }
 return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
int sqrt = binarysearch(n);
 cout<<"Answer is : "<<moreprecision(n,3,sqrt)<<endl;
return 0;
}