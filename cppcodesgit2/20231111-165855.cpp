#include<iostream>
using namespace std;
class b {
public:
    float real, imaginary;
    b() {
    real=0;
    imaginary=0;
    }
    b(float a, float b) {
        real=a;
        imaginary=b;

    }
    b operator+(const b&obj) {
        b res;
        res.real=real+obj.real;
        res.imaginary=imaginary+obj.imaginary;
        return res;
    }
    void display() {
        cout <<real<<"+"<<imaginary<<"i"<< endl;
    }
};
int main()
{   cout << "enter real1 and imag1:" << endl;
    float y, u;
    cin>>y>>u;

    b h1(y, u) ;
    cout << "enter real2 and imag2:" << endl;
    float s, d;
    cin>>s>>d;
    b h2(s, d) ;
    ;
    //cout << h1+h2;
    b h3=h1+h2;
    h3.display() ;
    return 0;
}