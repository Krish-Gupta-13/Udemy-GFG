#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<s.top()<<endl;
    s.pop();
    cout<<"The size is " <<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<"The size is " <<s.size()<<endl;
    cout<<s.empty()<<endl;
return 0;
}