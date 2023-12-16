#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

 int main (){
int a=15, b=5;
    cout<<"Values of a and b before swap"<<endl;
	cout<<"Value of a is: "<<a<<endl;
	cout<<"Value of b is: "<<b<<endl;
    cout<<"Values of a and b after swap"<<endl;
	swap(&a, &b); 
	cout<<"Value of a is: "<<a<<endl;
	cout<<"Value of b is: "<<b<<endl;
	return 0;
}
