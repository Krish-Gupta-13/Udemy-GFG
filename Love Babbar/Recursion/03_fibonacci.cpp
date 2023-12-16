#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    n = fibo(n-1) + fibo(n-2);
    return n;
}
int main(){
int n;
cout<<"Enter the value of n : "<<endl; 
cin>>n;
int ans = fibo(n);
cout<<ans<<endl;
return 0;
}

// #include<iostream>
// using namespace std;
// class sol{
//     public:
//     int fibo(int n){
//    if(n==0)
//    return 0;
//    if(n==1)
//    return 1;
//    n = fibo(n-1) + fibo(n-2);
//    return n;
//     }

// };
// int main(){
// int n;
// cin>>n;
// int fibo(n);
// cout<<n<<endl;

// return 0;
// }