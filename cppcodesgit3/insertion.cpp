#include<iostream>
using namespace std;
class a{
public:
int f, b;
a() {
f=0;
b=0;
}
a(int p, int q) {
f=p;
b=q;

}

a operator<<(a const &obj){
a a1;
a1.f=f+obj.f;
a1.b=b+obj.b;
return a1;
}


};
int main()
{   a p(10,30) ;
    a q(50,60) ;
    a z;
    z=p<<q;
    cout << z.f<<","<<z.b<< endl;
    return 0;
}