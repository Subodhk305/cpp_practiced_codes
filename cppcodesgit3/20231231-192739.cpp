#include<iostream>
using namespace std;

template<class T>

class data{
public:
template <class U> friend void getdata(data<U>&) ;
int x;
void getd() {
cout << "class data" << endl;
cout << "enter x:" << endl;
cin>>x;
}

void display() {
cout << "value of x: "<<x<< endl;
}

};

template<class T>
void getdata(data<T>&myd) {
cout << "into the friend function: "<< endl;
}

int main()
{   data<int>d;
    d.getd() ;
    d.display() ;
    
    data<float>p;
    p.getd() ;
    p.display() ;
    
    getdata(p) ;
    return 0;
}