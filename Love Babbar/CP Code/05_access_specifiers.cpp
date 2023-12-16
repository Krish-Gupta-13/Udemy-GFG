// #include <iostream>
// using namespace std;
// class base{    
// private:
// int a;
// protected: int b;
// public:
// int c;
// base(){
// a = 1;
// b = 2;
// c = 3;
//     }
// };
//  class derive: private base
//  {
// public:
// void showdata()
// {
// cout << "a is not accessible" << endl; 
// cout << "value of b is " << b << endl; 
// cout << "value of c is " << c << endl;
// }
// };
// int main(){
//     cout<<endl;
//     derive a;
//     a.showdata();
//     cout<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
class base{    
private:
int a;
protected: int b;
public:
int c;
base(){
a = 1;
b = 2;
c = 3;
    }
};
 class derive: private base
 {
public:
void showdata()
{
cout << "a is not accessible" << endl; 
cout << "value of b is " << b << endl; 
cout << "value of c is " << c << endl;
}
};
int main(){
    cout<<endl;
    derive a;
    a.showdata();
    cout<<endl;
    return 0;
}
