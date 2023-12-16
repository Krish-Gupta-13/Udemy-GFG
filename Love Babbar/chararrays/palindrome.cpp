#include<iostream>
using namespace std;
int getlength(char name[]){
   int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int checkpalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
char name[20];
cout<<"Enter the name :" <<endl;
cin>>name;
cout<<"Your name is : "<<name<<endl;
int len = getlength(name);
cout<<"Length of the word is : "<<len<<endl;
reverse(name,len);
cout<<"After reversing the word becomes : "<<name<<endl;
checkpalindrome(name, len);
cout<<"Palindrome or not : "<<checkpalindrome(name, len)<<endl;
return 0;
}