#include<iostream>
using namespace std;

class complex{
public:
double real;
double imaginary;
complex():real(0.0),imaginary(0.0){}
complex(double r,double i){
    real=r;
    imaginary=i;
}

complex operator+(const complex&r1){
    return complex(real+r1.real,imaginary+r1.imaginary);
}

complex operator*(const complex&other){
    return complex(real*other.real-imaginary*other.imaginary,real*other.imaginary+imaginary*other.real);
}

friend ostream &operator<<(ostream &os,complex r2){
    os<<r2.real<<"+"<<r2.imaginary<<"i"<<endl;
    return os;

}

friend istream & operator>>(istream &is,complex&r3){
    cout<<"enter real part"<<endl;
    is>>r3.real;
    cout<<"enter imaginary part"<<endl;
    is>>r3.imaginary;
    return is;

}

};

int main(){
    complex c1,c2,result;
    cout<<"enter data for first object"<<endl;
    cin>>c1;
    cout<<"enter data for second object"<<endl;
    cin>>c2;
    result=c1+c2;
    cout<<"result:"<<result<<endl;
   // cout<<result.real<<"+"<<result.imaginary<<"i"<<endl;
    result=c1*c2;
    cout<<"result:"<<result<<endl;
    //cout<<result.real<<"+"<<result.imaginary<<"i"<<endl;
    return 0;
}