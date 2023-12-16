#include<iostream>
using namespace std;
int main(){
int n=4;
// int count=1;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if(j>n-4){
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