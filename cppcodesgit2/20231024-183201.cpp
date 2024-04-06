#include<iostream>
using namespace std;
double e(double x, double n) {
    static double s;
    if(n==0) {
        return s;
    }
    else {
        s=1+x*s/n;
        return e(x,( n-1) ) ;
    }
}
int main()
{   double p;
    p=e(2,10) ;
    cout << p << endl;
    return 0;
}