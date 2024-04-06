#include<iostream>
using namespace std;
class a {
public:
    int b, c;
    a():b(0),c(0) {}
    a(int p, int q) {
        b=p;
        c=q;
    }
    a operator>>(const a&obj1) {
        a objf;
        objf.b=b+obj1.b;
        objf.c=c+obj1.c;
        return objf;
    }

    a operator<<(const a&obj1) {
        a objf2;
        objf2.b=b*obj1.b;
        objf2.c=c*obj1.c;
        return objf2;
    }

};


int main()
{   a a1(5,6);
    a a2(7,8) ;
    a s;
    a d;
    s=a1>>a2;
    cout << s.b<<" "<<s.c<< endl;

    d=a1<<a2;
    cout << d.b<<" "<<d.c<< endl;
    return 0;
}