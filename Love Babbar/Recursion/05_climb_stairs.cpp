#include<iostream>
using namespace std;
int climbstairs(int n){
    if(n==0)
    return 1; 
    if(n<0)
    return 0;
    n = climbstairs(n-1) + climbstairs(n-2);
    return n;
}

int main(){
int t;
cout<<"Enter the testcases : "<<endl;
cin>>t;
while(t--){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
int ans = climbstairs(n);
cout<<ans<<endl;
   }
return 0;
}