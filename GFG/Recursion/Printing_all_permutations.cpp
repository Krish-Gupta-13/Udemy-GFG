//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void printpermutation(string s, int i){
    if(i==s.length()-1){
        cout<<s<<" ";
        return;
    }
    for(int j=i; j<s.length(); j++){
        swap(s[i], s[j]);
        printpermutation(s,i+1);
        swap(s[j],s[i]);
    }

}
int main(){
    string str ="ABCD";
    printpermutation(str, 0);
    
return 0;
}