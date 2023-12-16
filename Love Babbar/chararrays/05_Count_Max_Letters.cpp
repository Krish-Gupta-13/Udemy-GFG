#include<iostream>
using namespace std;
char getmaxocccharacter(string s){
    int arr[20] = {0};
    // Create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // lowercase
        int number = 0;
        if(ch >='a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{  /*uppercase*/
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1;
int ans = 0;
for(int i=0; i<26; i++){
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
}
char finalans = 'a'+ ans;
return finalans;
   }
int main(){
string s;
cout<<"Enter your string "<<endl;
cin>>s;
cout<<getmaxocccharacter(s)<<endl;
return 0;
}