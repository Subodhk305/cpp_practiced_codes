#include<iostream>
#include<algorithm>
using namespace std;

#define N 50


class priority {
private:
    int arr[N];
    int size;
    int parent(int i) {
        return (i-1) /2;
    }
    int left(int i) {
        return (2*i) +1;
    }
    int right(int i) {
        return (2*i) +2;
    }

    void heapifyup(int I) {
        while(I>=0 && arr[I]>arr[parent(I)]) {
            swap(arr[I],arr[parent(I)]) ;
            I=parent(I);
        }
    }

    void heapifydown(int I) {
        int large=I;
        int l=left(I);
        int r=right(I);
        if(l<N && arr[l]>arr[large]) {
            large=l;

        }
        else if(r<N && arr[r]>arr[large]) {
            large=r;

        }
        if(large!=I) {
            swap(arr[I],arr[large]) ;
            heapifydown(large);
        }
    }

public:
    priority() :size(0) {}
    void enqueue(int x) {
        if(size==N) {
            cout << "priority queue is full" << endl;
            return;
        }
        arr[size]=x;
        size++;
        heapifyup(size-1) ;
    }
    int dequeue() {
        if(size==0) {
            cout << "empty! " << endl;
            return -1;
        }
        int data=arr[0];
        arr[0]=arr[size-1];
        size--;
        heapifydown(0) ;
        return data;
    }

    void peek() {
        if(size==0) {
            cout << "empty! " << endl;
            return;
        }
        cout << "data at top:"<<arr[0]<< endl;
    }
    bool isempty() {
        if(size==0) {
            cout << "empty! " << endl;
            return true;
        }
        return false;
    }
};
int main()
{   priority pq;
    pq.enqueue(23) ;
    pq.enqueue(90) ;
    pq.enqueue(98) ;
    pq.enqueue(99) ;
     
     
   cout << "deleted element:"<<pq.dequeue()<<endl;
    pq.peek() ;
    return 0;
}