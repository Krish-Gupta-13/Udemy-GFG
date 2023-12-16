#include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    int flag = 0;
    if(n==1 || n==0){
        flag = -1;
    }
    if(n==2){
        flag = 1;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){  
        flag = -1;
        break;
        }
        
    else{
        flag = 1; 
        }
    }
    if(flag == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}
int main(){
int n;
cin>>n;
isprime(n);
   


return 0;
}