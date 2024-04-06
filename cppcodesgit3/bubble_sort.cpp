#include<iostream>
using namespace std;

void bubble_sort(int a[], int n) {
    int flag=false;
    for(int I=0; I<n; I++) {

        for(int j=0; j<n-1-I; j++) {
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]) ;
                flag=true;
            }
        }
        if(flag==false) {
            return;
        }

    }


}
int main()
{
    int a[]= {2000,6,5,4,23,3,2,1};
    int n=8;
    bubble_sort(a, n) ;
    for(int I=0; I<n; I++) {
        cout << a[I]<<"\n";
    }
    return 0;
}