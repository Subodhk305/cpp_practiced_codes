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
    friend a operator>>(const a&obj1,const a&obj2);

    friend a operator<<(const a&obj1, const a&obj2);

};
a operator>>(const a&obj1,const a&obj2) {
    a objf;
    objf.b=obj2.b+obj1.b;
    objf.c=obj1.c+obj2.c;
    return objf;
}
a operator<<(const a&obj1, const a&obj2) {
    a objf2;
    objf2.b=obj2.b*obj1.b;
    objf2.c=obj2.c*obj1.c;
    return objf2;
}
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