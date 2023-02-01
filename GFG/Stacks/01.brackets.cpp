#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long int
#define llf long long float
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nm cout<<"-1"<<endl;
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define st sort(v.begin(), v.end());
#define stg sort(v.begin(), v.end(), greater<>());
#define pi  3.14 
//Jda mt soch code krte ja//
bool matching(char a, char b){
    return((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}

bool is(string str){
    stack<int> s;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true)
        return false;
        else if(matching(s.top(), str[i])==false)
        return false;
        else{
            s.pop();
        }

        }
        return(s.empty()==true);

    }
}
int main(){
string str;
cin>>str;
is(str);

return 0;
}