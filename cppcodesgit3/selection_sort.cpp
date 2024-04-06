#include<iostream>
using namespace std;

void selection_sort(int a[],int n) {
    int I=0;
    int min=I;
    for(I=0; I<n-1; I++) {
        for(int j=I+1; j<n; j++) {
            if(a[j]<a[min]) {
                min=j;
            }
        }
    
    if(min!=I) {
      swap(a[min],a[I]) ;
    }
    }
}
int main()
{   int a[]={23,1,4,5,2,3};
    int n=6;
    selection_sort(a, n) ;
    for(int I=0;I<n;I++) {
     cout << a[I]<<"\t";
    }
    return 0;
}