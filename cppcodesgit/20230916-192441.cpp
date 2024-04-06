#include<iostream>
using namespace std;
template<class t1, class t2>
class subodh{
public:
t1 a;
t2 b;
subodh(t1 d, t2 c) {
a=d;
b=c;
}
void display() {
cout <<a<<endl<<b<< endl;
}
};

int main()
{   subodh<char,float>s1('c',9.52) ;
    s1.display() ;
    
    return 0;
}