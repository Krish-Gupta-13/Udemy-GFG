#include<iostream>
using namespace std;
int power(int x, int n){
    if(n==0)
        return 1;  
        int a = power(x,n-1);
        int b = x*a;
    return b; 
}
int main(){
    int x;
    cout<<"Base :"<<endl;
cin>>x;
int n;
cout<<"Power : "<<endl;
cin>>n;

int ans = power(x,n);
cout<< ans <<endl;
return 0;
}