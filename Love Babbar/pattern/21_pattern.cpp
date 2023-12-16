#include<iostream>
using namespace std;
int main(){
int n=4;
for(int i=1;i<=n;i++){
 
    for(int j=1;j<=i;j++){
        // int space=n-i;
        if(n>n-j+i){
               cout<<j;
        }
        else{
        cout<<" ";
        }
    }
    cout<<endl;
}
return 0;
}