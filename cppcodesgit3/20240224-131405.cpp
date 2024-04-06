#include<iostream>
using namespace std;

void fib() {
    int n1=0;
    int n2=1;
    int res;
    cout << "fibonacci series:" << endl;
    cout <<n1;
    while(res<100) {
        cout <<"\t"<<n2;
        res=n1+n2;
        n1=n2;
        n2=res;
    }

}

int fibr(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }

    return fibr(n-1) +fibr(n-2) ;
}
int main()
{  // fib() ;
    cout << fibr(1)  << endl;
    return 0;
}