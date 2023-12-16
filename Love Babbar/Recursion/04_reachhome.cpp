#include<iostream>
using namespace std;
void reachhome(int src,int dest){
    cout<<" src "<<src<<" dest "<<dest<<endl;
    if(src==dest){
        cout<<"Reached Home"<<endl;
        return ;
    }
    src=src+2;
    reachhome(src,dest);
}
int main(){
int dest=10;
int src=0;
cout<<endl;
reachhome(src,dest);
return 0;
}