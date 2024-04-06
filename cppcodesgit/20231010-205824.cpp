#include<iostream>
using namespace std;
class a;
class addi{
public:
    int data1;
    void d1(int n) {
        data1=n;
    }
    void display () {
        cout << data1 << endl;
    }
    friend void add (addi c,a d) ;
};
class a {
public:
    int data2;
    void d2(int m) {
        data2=m;
    }
    void display1 () {
        cout << data2 << endl;
    }
    friend void add (addi c,a d) ;
};
void add(addi c, a d) {
    int sum;
    sum= c.data1+d.data2;
    cout << "sum is:"<<sum << endl;
}
int main()
{   addi s;
    s.d1(5) ;
    s.display() ;
    a b;
    b.d2(10) ;
    b.display1() ;
    add(s, b) ;
    return 0;
}