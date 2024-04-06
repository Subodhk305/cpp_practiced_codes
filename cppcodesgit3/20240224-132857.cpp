#include<iostream>
using namespace std;

void bubblesort(int a[],int n) {
    int temp;
    for(int I=0; I<n; I++) {
        for(int j=0; j<n; j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int I=0; I <5; I++) {
        cout << a[I]<<"\t";
    }

}
int main()
{   int a[]= {5,4,3,2,1};
    bubblesort(a,5) ;

    return 0;
}