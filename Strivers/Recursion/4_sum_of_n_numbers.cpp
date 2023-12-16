#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void summ(int i, int sum){
    if(i<1){
    cout<<sum<<endl;
    return;
    }
    summ(i-1, sum+i);
    // cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
summ(n,0);
return 0;
}