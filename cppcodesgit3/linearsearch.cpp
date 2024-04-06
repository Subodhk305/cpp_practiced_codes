#include<iostream>
using namespace std;


void linear_search(int a[],int n,int ele) {
    int I;
    bool flag=false;
    for( I=0; I<n; I++) {
        if(a[I]==ele) {
            cout << "element found at index:"<<I << endl;
            flag=true;
        }
    }
    if(flag==false) {
        cout << "element absent" << endl;
    }
}
int main()
{   int a[]= {12,23,13,1,3,234};
    int n=6;
    cout << "element to find" << endl;
    int p;
    cin>>p;
    linear_search(a,6,p) ;
    return 0;
}