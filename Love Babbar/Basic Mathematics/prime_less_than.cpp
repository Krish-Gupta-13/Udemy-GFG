#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number : "<<endl;
cin>>n;

for(int i=2; i<n; i++){
    if(n%i==0){
        cout<<"Not a prime number "<<endl;
    }
    else{
          cout<<"Is a prime number "<<endl;
    }
}
return 0;
}