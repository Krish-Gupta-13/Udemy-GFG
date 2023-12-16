#include<bits/stdc++.h>
using namespace std;
int ans(int n){
    int i = 2;
    int b = 1;
    if(i>n){
        return b;
    }
    else if(n%2==){
        b = b^i;
        return ans(b,i+1,n);
    }
    else{
        b=b&1;
        return ans(b,i+1,n);
    }


    // if(n%2==0){
    //     return n^(n-1);
    // }
    // else{
    //     return (n-1)&n;
    // }
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   int b = 1;
   int i = 2;
   cout<<ans(b,i,n);

    // cout<<ans(n)<<endl;
}
return 0;
}