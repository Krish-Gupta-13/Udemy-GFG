#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(tolowercase(a[s]) != tolowercase(a[e])){
            // return 0;
            cout<<"0"<<endl;
            break;
        }
        else{
            s++;
            e--;
        }
    }
    cout<<"1"<<endl;
    // return 1;
}
int main(){
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"your name is : "<<name<<endl;

int lenn = getlength(name);
cout<<lenn<<endl;
// int ck = checkpalindrome(name, lenn);
// cout<<ck<<endl;
checkpalindrome(name, lenn);
return 0;
}
// #include<iostream>
// using namespace std;
// char tolowercase(char ch){
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool checkpalindrome(char a[], int n){
//     int s = 0;
//     int e = n-1;
//     while(s<=e){
//         if(tolowercase(a[s]) != tolowercase(a[e])){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
           
//     }
//     return 1;
// }
// int getlength(char name[]){
//    int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//   return count;
// }
// int main(){
// char name[20];
// cout<<"Enter your name : "<<endl;
// cin>>name;
// cout<<"Your name is : "<<name<<endl;
// int len;
// len = getlength(name);
// int pal = checkpalindrome(name, len);
// cout<<"Palindrome or not: "<<pal<<endl;
// return 0;
// }



