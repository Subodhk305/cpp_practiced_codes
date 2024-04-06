#include<iostream>
using namespace std;
int fact(int n) {
    if(n==0) {
     return 1;
    }
    return fact(n-1)*n ;
}

int ncr(int n, int r) {
int p, q;
p=fact(n) ;
q=fact(n-r)*fact(r) ;
return p/q;
}

int NCR(int n, int r) {
if(n==r||r==0) {
return 1;
}
return NCR(n-1, r-1)+NCR(n-1, r) ;
}
int main()
{   int r;
    r=ncr(5,2);
    cout << r << endl;
    r=NCR(5,2);
    cout << r << endl;

    return 0;
}