#include<iostream>
using namespace std;
int fib1(int n) {
    int f1, f2, s;

    f1=0;
    f2=1;
    for(int I=2; I<=n; I++) {
        s=f1+f2;
        f1=f2;
        f2=s;
    }
    return s;
}

int fib2(int n) {
    if(n<=1) {
        return n;
    }
    return fib2(n-1) +fib2(n-2) ;
}
int F[10];
int fib3(int n) {
    if(n<=1) {
        return n;
    }
    else {
        if(F[n-2]==-1) {
            F[n-2]=fib3(n-2) ;
        }
        if(F[n-1]==-1) {
            F[n-1]=fib3(n-1) ;
        }
        F[n]=F[n-1]+F[n-2];
    }
    return F[n-1]+F[n-2];
}
int main()
{   for(int I=0; I<10; I++) {
        F[I]=-1;
    }
    int r;
    r=fib1(5) ;
    cout << r << endl;
    r=fib2(5) ;
    cout << r << endl;
    r=fib3(5) ;
    cout << r << endl;
    
    return 0;
}