//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct matrix{
    int *A;
    int n;

};

// Column traversal
void Set(struct matrix *m, int i, int j, int x){
    if(i>=j){
        m->A[m->n*(j-1)+(j-1)*(j-2)/2+i-j]=x;
    }
}

int Get(struct matrix m, int i, int j){
    if(i>=j){
        return m.A[m.n*(j-1)+(j-2)*(j-1)/2+i+j];
    }
    else{
        return 0;
    }
}

void Display(struct matrix m){
    int i,j;
    for(int i=1; i<=m.n; i++){
        for(int j=1; j<=m.n; j++){
            if(i>=j){
                cout<<m.A[m.n*(j-1)+(j-1)*(j-2)/2+i-j]<<" ";
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
    int i,j,x;

    cout<<"Enter Dimension : ";
    cin>>m.n;
    m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    cout<<"Enter all elements : "<<endl;
    for(i=1; i<=m.n; i++){
        for(j=1; j<=m.n; j++){
            cin>>x;
            Set(&m,i,j,x);
        }
    }
    cout<<endl;
    Display(m);

return 0;
}

// Row traversal
// i*(i-1)+j-1