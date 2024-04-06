#include<iostream>
using namespace std;

class base1{
int a;
public:
base1(int I) {
a=I;
cout << "base1 constructor is called" << endl;

}
void display1() {
cout << "value of a is :"<<a << endl;
}
};

class base2{
int b;
public:
base2(int I) {
b=I;
cout << "base2 constructor is called" << endl;

}
void display2() {
cout << "value of b is :"<<b<< endl;
}
};

class derived:public base1, public base2{
int der1, der2;
public:
derived(int a, int b, int c, int d) :base1(a), base2(b) {
der1=c;
der2=d;
cout << "derived constructor is called" << endl;
}
void display3() {
cout << "value of der1:" <<der1<< endl;
cout << "value of der2:" <<der2<< endl;
}


};
int main() {
derived s(2,3,4,5);
s.display1() ;
s.display2() ;
s.display3() ;
return 0;

}