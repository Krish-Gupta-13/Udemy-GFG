#include<bits/stdc++.h>
using namespace std;
int main(){
int i = 5;
int *p = &i;
int **p2 = &p;
cout<<"Value"<<endl;
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;
cout<<"Address"<<endl;
cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;
cout<<"OK"<<endl;
cout<<&p<<endl;
cout<<p2<<endl;
return 0;
}