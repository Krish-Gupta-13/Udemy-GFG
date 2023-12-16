#include<iostream>
using namespace std;
#define ll long long int
int main(){
int n=4;
ll count = 1; 
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>=n-j){
            cout<<i-count;
            // cout<<i;
            count++;
        }
        else{
            cout<<" ";
        }
    }
    count = 1;
    cout<<endl;
}
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