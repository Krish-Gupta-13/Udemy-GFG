#include<bits/stdc++.h>
using namespace std;
int area(int l, int b){
    return l*b;
}
int perimeter(int l, int b){
    return 2*(l+b);

}
int main(){
int l,b;
cin>>l>>b;
cout<<area(l,b)<<endl<<perimeter(l,b)<<endl;
return 0;
}
