#include<iostream>
using namespace std;
template<typename T>
class quicksort {
public:
    int partition(T a[],int lb,int ub) {
        T pivot=a[lb];
        int start=lb;
        int end=ub;
        while(start<end) {
            while(a[start]<=pivot) {
                start++;
            }
            while(a[end]>pivot) {
                end--;
            }
            if(start<end) {
                T temp=a[start];
                a[start]=a[end];
                a[end]=temp;
            }
        }
        T t=a[lb];
        a[lb]=a[end];
        a[end]=t;
        return end;
    }
    void quick_sort(T a[],int lb,int ub) {
        if(lb<ub) {
            T loc=partition(a,lb, ub) ;
            quick_sort(a, lb, loc) ;
            quick_sort(a, loc+1,ub) ;
        }
    }
    void display(T a[],int n) {
        for(int I=0; I<n; I++) {
            cout << a[I]<< endl;
        }
    }

};
int main() {
    cout << "integer array: " << endl;
    int a[]= {9,8,7,6,5,4,3,2,1};
    quicksort<int>q;
    q.quick_sort(a, 0,8) ;
    q.display(a,8) ;
    cout << "\nfloating point array: " << endl;
    float b[]= {9.2,8.9,7.9,6.8,6.5,4.5,3.7,2.8,1.9};
    quicksort<float>p;
    p.quick_sort(b, 0,8) ;
    p.display(b,8) ;
    return 0;
}