#include<iostream>
using namespace std;
int main(){
int n=4;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
   if(n<i+j){
 cout<<n-j+1;
   }
   else{
       cout<<" ";
   }
   for(int k=i-1;k<n;k--){
       cout<<i;
   }
    }
    cout<<endl;
}


return 0;
}
/*
      1 2 3 4 5 6 7 8
1     _ _ _ 1 _ _ _
2     _ _ 1 2 1 _ _
3     _ 1 2 3 2 1 _
4     1 2 3 4 3 2 1
  */