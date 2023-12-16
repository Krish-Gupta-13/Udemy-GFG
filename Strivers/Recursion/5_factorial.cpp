#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int factorial(int n){
    if(n==1)
    return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the vaule of n : ";
    cin>>n;
cout<<factorial(n)<<endl;
return 0;
}