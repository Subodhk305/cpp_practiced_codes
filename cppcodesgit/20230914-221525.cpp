#include<iostream>
using namespace std;

class baseclass{
public:
int var_base;
virtual void display() {
cout << "value of base class variable is :" <<var_base<< endl;
}

};
class derived:public baseclass{
public:
int var_der=44;
void display() {
cout << "value of base class variable:"<<var_base<< endl;
cout << "value of derived class variable:" <<var_der<< endl;
}

};

int main() {
baseclass *base_ptr;
baseclass obj_base;
derived obj_der;
base_ptr=&obj_der;
base_ptr->var_base=32;
base_ptr->display() ;

return 0;
}