#include<iostream>
using namespace std;
void insertion_sort(int a[],int n) {
    int I, j;
    int temp;
    for( I=1; I<n; I++) {
        temp=a[I];
        j=I-1;
        while(j>=0&&a[j]>temp) {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=temp;
    }
}
int main()
{   int a[]= {6,5,4,3,2,1};
    int n=6;
    insertion_sort(a, n) ;
    for(int I=0; I<n; I++) {
        cout << a[I]<<"\n";
    }
    return 0;
}