#include<iostream>
using namespace std;
int *func(int size) {
    int *p;
    p=new int[size];
    for(int I=0; I<size; I++) {
        p[I]=I+1;
    }
    return p;
}
int main()
{   int *ptr,sz;
    cout << "enter the required size of array:" << endl;
    cin>>sz;
    ptr=func(sz) ;
    for(int I=0; I<sz; I++) {
        cout << ptr[I]<<" ";
    }

    return 0;
}