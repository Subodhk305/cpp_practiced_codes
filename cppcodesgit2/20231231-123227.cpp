#include<iostream>
using namespace std;

class realnum{
public:
float real;
float imaginary;

realnum() {
real=0.0;
imaginary=0.0;
}

realnum(float x, float y) {
real=x;
imaginary=y;
}

friend ostream & operator <<(ostream&os, realnum&a){
os<<"real :"<<a.real<< endl;
os<<"imaginary: "<<a.imaginary<<endl;
os<<"complex number: "<<a.real<<"+"<<a.imaginary<<"i"<<endl;
return os;
} 

friend istream & operator >>(istream&is, realnum&r){
cout << "enter real part:" << endl;
is>>r.real;
cout << "enter imaginary part" << endl;
is>>r.imaginary;
return is;
} 

void display()const {
cout << "real: "<<real<< endl;
cout << "imaginary: "<<imaginary<< endl;
cout << "complex number: "<<real<<"+"<<imaginary<<"i"<< endl;
}

};
int main()
{   realnum rp;
    rp.display() ;
    
    realnum r;
    cin>>r;
    
    realnum p;
    cin>>p;
   
    
    
    cout<<r;
    cout<<p;
    return 0;
}