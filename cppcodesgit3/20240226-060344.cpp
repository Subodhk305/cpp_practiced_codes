#include<iostream>
using namespace std;
int a=98;
int b=97;
int myfun() {
    a=23;
    b=0;
    return 99;
}
int main()
{   cout <<b<<" "<<a << endl;
    myfun() ;
    cout << a << endl;
    cout << b << endl;
    return 0;
}