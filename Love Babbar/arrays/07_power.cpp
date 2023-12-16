#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;
for(int i=0; i<31; i++){
    int ans = pow(2,i);
    if(ans == n){
        // return true;
        cout<<"The number is in the form of 2 to the power something :"<<endl;
    }
    // else{
    //     cout<<"The number is not in the form of 2 to the power something :"<<endl;
    // }
    // return false;
}
return 0;
}