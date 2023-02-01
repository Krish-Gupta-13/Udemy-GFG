//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void patsearching(string &txt, string &pat){
    int m = pat.length();
    int n = txt.length();
    for(int i=0; i<m-n; i++){
        for(int j=0; j<m; j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
            if(j==m){
                cout<<i<<" ";
            }
        }
    }

}
using namespace std;
int main(){
string txt = "abcabcd";
string pat = "abcd";

patsearching(txt, pat);
return 0;
}