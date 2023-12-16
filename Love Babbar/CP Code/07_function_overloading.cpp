#include <iostream>
using namespace std;
int perimeter(int s){
return 4*s;
}
int perimeter(int l , int b){
return (2*(l+b));
 }
 int main(){
int (*peri_1)(int);
int (*peri_2)(int,int);
peri_1=perimeter;
peri_2=perimeter;
cout<<endl;
cout<<"Invoking perimeter(int) through peri_1 "<<peri_1(50)<<endl;
cout<<"Invoking perimeter(int,int) through peri_2 "<<peri_2(100,50);
cout<<endl<<endl;
return 0;
 }
