//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void subsets(string s, string curr, int i){
    if(i==s.length()){
        cout<<curr<<" ";
        return;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main(){
    string s = "ABC";
    // string curr="";
    // int i;
    subsets(s,"",0);

return 0;
}