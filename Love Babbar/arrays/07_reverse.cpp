#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the digit:" <<endl;
cin>>n;
int ans = 0;
while(n!=0){
int digit = n % 10;
// if((ans>INT_MAX)||(ans<INT_MIN)){
    // return 0;
// }
ans = (ans*10) + digit;
n = n/10;
}
cout<<ans<<endl;
// return ans;

return 0;
}
