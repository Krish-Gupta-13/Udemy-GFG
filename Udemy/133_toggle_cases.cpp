#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "KrisH";
    for(int i=0; i<s.length(); i++){
        if(s[i]>=65 && s[i]<=90){
            s[i] = s[i]+32;
        }
        else{
            s[i] = s[i]-32;
        }
    }
    cout<<s<<endl;

    return 0;
}