//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort(int A[], int n){
    int flag;
    for(int i=0; i<n-1; i++){
         flag=0;
        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
            swap(&A[j], &A[j+1]);
            flag = 1;
            }
        }
    if(flag==0){
        break;
    }
    }
    // for(int i=0; i<n; i++){
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;
}

void InsertionSort(int A[], int n){
    int i,j,x;
    for(i=1; i<n; i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

void SelectionSort(int A[], int n){
    int i,j,k;
    for(i=0; i<n-1; i++){
        for(j=k=i; j<n; j++){
            if(A[j]<A[k]){
                k=j;
            }
            swap(&A[i],&A[k]);
        }
    }
}

int partionsort(int A[], int l, int h){
    int pivot=A[l];
    int i=l;
    int j=h;
    do{
        do{
            i++;
        }
        while(A[i]<=pivot);
    do{
        j--;
    }
    while(A[j]>pivot);
    }
    while(i<j);

    swap(&A[l], &A[j]);
    return j;
}


void QuickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j=partionsort(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

void merge(int A[], int l, int mid, int h){
    int i=l, j=mid+1, k=l;
    int B[100];
    while(i<mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }
    for(; i<=mid; i++){
        B[k++]=A[i];
    }
    for(; j<=h; j++){
        B[k++]=A[j];
    }
    for(i=l; i<=h; i++){
        A[i]=B[i];
    }
}

void IterativeMergeSort(int A[], int n){
    int p,l,h,mid,i;
    for(p=2; p<=n; p=p*2){
        for(int i=0; i+p-1<n; i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,h);
        }
        if(n-i>p/2){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,n-1);
        }
    }
    if(p/2<n){
        merge(A,0,p/2-1,n-1);
    }
}


void MergeSort(int A[], int l, int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}



int findMax(int A[], int n){
    int max=INT_MIN;
    int i;
    for(i=0; i<n; i++){
        if(A[i]>max){
            max=A[i];
        }
    }
        return max;
}

void CountSort(int A[], int n){
    int i,j,max, *C;
    max=findMax(A,n);
    C=(int *)malloc(sizeof(int)*(max+1));
    for(i=0; i<max+1; i++){
        C[i]=0;
    }
    for(int i=0;i<n; i++){
        C[A[i]]++;
    }
    i=0;
    j=0;
    while(j<max+1){
        if(C[j]>0){
            A[i]=j;
            i++;
            C[j]--;
        }
        else{
            j++;
        }
    }
}

void Shellsort(int A[], int n){
    int gap,i,j,temp;
    for(gap=n/2; gap>=1; gap=gap/2){
        for(i=gap; i<n; i++){
            temp=A[i];
            j=i-gap;
            while(j>=0 && A[j]>temp){
                A[j+gap]=A[j];
                j=j-gap;
            }
            A[j+gap]=temp;
        }
    }
}


int main(){
    int A[]={1,4,2,64,3,523,23};
    int n=7;
    // BubbleSort(A, n);

    // InsertionSort(A, n);
    
    // SelectionSort(A, n);

    // QuickSort(A,0,n-1);

    // CountSort(A,n);

    // IterativeMergeSort(A,n);

    MergeSort(A,0,n-1);




    for(int i=0; i<n-1; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
return 0;
}