//Code bhi krle kitna game khelega//
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
class MinHeap{
    int *arr;
    int size;
    int capacity;

    public:

    MinHeap(int c){
        size = 0;
        capacity = c;
        arr = new int[c];
    }

    int left(int i){
        return(2*i+1);
    }
    int right(int i){
        return(2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }

    void insert(int x){
        if(size==capacity)
        return;
        size++;
        arr[size-1]=x;

        for(int i=size-1; i!=0 && arr[parent(i)]>arr[i];){
            swap(arr[i], arr[parent(i)]);
            i=parent(i);
        }
    }

        void minHeapify(int i){
        int lt = left(i);
        int rt = right(i);
        int smallest =i;
        if(lt<size && arr[lt]<arr[i])
        smallest = lt;
        if(rt<size && arr[rt]<arr[smallest])
        smallest = rt;
        if(smallest!=i){
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }



// Since it is a minheap therefore arr[0] is minimum so we can easily get minimum value. After extracting heapify the tree to again get a minheap.


    int extractMin(){
        if(size<=0)
        return INT_MAX;
        if(size==1){
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size-1]);
        size--;
        minHeapify(0);

        return arr[size];
    }


// Changes value to a given value and then heapify


    void decreasekey(int i, int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

// Replaces the given value with infinity and then extract it by sending it at arr[0] and then heapify.
    void deletekey(int i){
        decreasekey(i, INT_MIN);
        extractMin();
    }


// Used to find parent root of the tree.


    void buildheap(){
        for(int i=(size-2)/2; i>=0; i--){
            minHeapify(i);
        }
    }
};
int main(){
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.deletekey(0);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << endl;
    h.decreasekey(2, 1);
    cout << h.extractMin() << endl;
return 0;
}