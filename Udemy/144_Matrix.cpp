//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct matrix{
    int A[10];
    int n;
};

void Set(struct matrix *m, int i, int j, int x){
    if(i==j){
        m->A[i-1]=x;
    }
}

int Get(struct matrix m, int i, int j){
    if(i==j){
        return m.A[i-1];  
    }
    else{
        return 0;
    }
}

void Display(struct matrix m){
    int i, j;
    for(int i=1; i<=m.n; i++){
        for(j=1; j<=m.n; j++){
            if(i==j){
                cout<<m.A[i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    struct matrix m;
    m.n=4;
    Set(&m,1,1,5);
    Set(&m,2,2,5);
    Set(&m,3,3,5);
    Set(&m,4,4,5);
    
    Display(m);

return 0;
}