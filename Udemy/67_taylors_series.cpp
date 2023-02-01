//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int e(int x, int n){
    static int p=1, f=1;
    int r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=n*f;
        return r + p/f;
    // cout<<r+p/f<<endl;
    }
}
int main(){

    cout<<e(3,2)<<endl;

return 0;
}