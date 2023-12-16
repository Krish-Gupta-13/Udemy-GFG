#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    char s[]="prashant";
    long int h=0;
    long int x=0;
    // int i=0;
    for(int i=0; s[i]!='\0'; i++){
       x = 1;
       x = x<s[i]-97;
        if(h>0 && x>0){
            cout<<"IT IS A DUPLICATE"<<s[i]<<endl;
        }
        // else {
        //     cout<<(h=h || h=x);
        // }
    }
    
     

    return 0;
}