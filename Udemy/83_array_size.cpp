#include<bits/stdc++.h>
using namespace std;
int main(){
int *p = new int[5];
int *q = new int[10];
p[0]=3;
p[1]=0;
p[2]=5;
p[3]=7;
p[4]=2;
for(int i=0; i<5; i++){
    q[i]=p[i];
}
p[5]=13;
p[6]=10;
p[7]=15;
p[8]=17;
p[9]=12;
for(int i=0; i<10; i++){
    cout<<p[i]<<" ";
}
cout<<endl;
free(p);
p=q;
q = NULL;
return 0;
}