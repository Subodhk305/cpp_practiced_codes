#include<iostream>
using namespace std;
double e(double x,double n) {
static double p=1, q=1;
double r;
if(n==0) {
return 1;
}
else{
r=e(x, (n-1) ) ;
p=p*x;
q=q*n;
return r+p/q;
}
}
int main()
{   double z;
    z=e(4,10) ;
    cout << z << endl;
    return 0;
}