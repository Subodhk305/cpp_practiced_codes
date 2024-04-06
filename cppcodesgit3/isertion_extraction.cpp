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

a operator>>(a const &obj2){
a a2;
a2.f=f*obj2.f;
a2.b=b*obj2.b;
return a2;
}


};
int main()
{   a p(10,30) ;
    a q(50,60) ;
    a z;
    a v;
    z=p<<q;
    cout << "by overloading of insertion operator <<" << endl;
    
    cout << z.f<<","<<z.b<< endl;
    
    cout << "by overloading of extraction operator >>" << endl;
    v=p>>q;
    cout << v.f<<","<<v.b<< endl; 
    return 0;
}