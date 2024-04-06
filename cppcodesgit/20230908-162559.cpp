#include<iostream>
using namespace std;


class base {
   int data1;
public:
    
    int data2;
    void getdata() ;
    int setdata1() ;
    int setdata2() ;

};
void base::getdata() {
    data1=20;
    data2=30;

}
int base::setdata1() {
    return data1;
}
int base::setdata2() {
    return data2;
}
class derived:public base {
    int data3;
public:
    void process() ;
    void display() ;

};
void derived::process() {
    data3=data2*setdata1() ;
}
void derived::display() {
    cout << "value of data1 is:" <<setdata1()<< endl;
    cout << "value of data2 is: "<<data2 << endl;
    cout << "value of data3 is: "<<data3 << endl;
}
int main()
{   derived s1;
    s1.getdata () ;
    s1.process() ;
    s1.display() ;

    return 0;
}