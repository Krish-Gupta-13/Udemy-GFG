//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
void C(int n, int r){

    // int a = factorial(n);
    // int b = factorial(r);
    // int c = factorial(n-r);

    // return a/(b*c);

}
int main(){
// cout<<factorial(3)<<endl;
    int n = 5;
    int r = 2;
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);

    // return a/(b*c);
cout<<a/(b*c)<<endl;
return 0;
}