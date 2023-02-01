//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int C(int n, int r){
    if(r==0 || r==n){
        return 1;
    }
    return C(n-1,r-1) + C(n-1,r);
}
int main(){
    cout<<"nCr of the given value is :"<<C(5,3)<<endl;


return 0;
}