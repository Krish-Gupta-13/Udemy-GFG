#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
int a[5]={2,4,5,6,7};
int *p;
int i;
p = (int *)malloc(5*sizeof(int));
p[0]=3;
p[1]=0;
p[2]=5;
p[3]=7;
p[4]=2;
for(int i=0; i<5; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0; i<5; i++){
    printf("%d ", p[i]);
}
cout<<endl;

return 0;
}