#include <bits/stdc++.h>
using namespace std;
class dora{
int x = 5;
public:
void display(){
cout << "Value of x is : " << x<<endl;
    }
};
class shin: public dora{
int y = 10;
public:
void display(){
cout << "Value of y is : " <<y<<endl;
    }
};
int main(){
    cout<<endl;
dora *a;
shin b;
a = &b;
a->display();
cout<<endl;
return 0;
}