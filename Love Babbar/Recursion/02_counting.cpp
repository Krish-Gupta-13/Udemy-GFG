#include<iostream>
using namespace std;
int count(int n){
    if(n == 1){
    return 1;
    }
  cout<<n<<" ";
    int a = count(n-1);
      
}
int main(){
int n;
cout<<"Enter the value of n : "<<endl;
cin>>n;
int ans = count(n);
cout<<ans<<endl;
return 0;
}