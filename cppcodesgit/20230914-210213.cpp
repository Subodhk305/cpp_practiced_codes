#include<iostream>
using namespace std;

class baseclass{
public:
int var_base;
void display() {
cout << "value of base class variable is :" <<var_base<< endl;
}

};
class derived:public baseclass{
public:
int var_der;
void display() {
cout << "value of base class variable:"<<var_base<< endl;
cout << "value of derived class variable:" <<var_der<< endl;
}

};
int main()
{   baseclass *bcp;//base_class_pointer
    baseclass obj_base;
    derived obj_der;
    bcp=&obj_der;
    bcp->var_base=34;
    bcp->display() ;
    derived *dcp;
    dcp=&obj_der;
    dcp->var_der=49;
    dcp->display() ;
    return 0;
}