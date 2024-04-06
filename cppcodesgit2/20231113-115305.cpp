#include<iostream>
using namespace std;

void insertion_sort(int A[],int n) {
//int I=0;
    int j, key;
    for(int I=1; I<=n-1; I++) {
        j=I-1;
        key=A[I];
        while(I>=0 &&A[j]>key) {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

void display(int P[], int n) {
    for(int I=0; I<=n; I++) {
        cout << P[I]<<"\t";
    }
}
int main()
{
    int a[]= {5,23,34,26,37,45};
    insertion_sort(a, 6) ;
    display(a, 6) ;
    cout << endl;
    return 0;
}