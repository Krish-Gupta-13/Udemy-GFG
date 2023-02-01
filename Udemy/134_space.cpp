#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[] = "How are    you";
    int words = 1;
    for(int i=0; ch[i]!='\0'; i++){
        if((ch[i]==' ') && (ch[i-1]!=' ')){
            words++;
        }
    }
    cout<<words<<endl;
    return 0;
}