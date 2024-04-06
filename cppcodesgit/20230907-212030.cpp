#include<iostream>
using namespace std;
class number{
int a;
public:
number(int n=0) {
a=n;
}
number(number&obj){
cout<<"copy constructor is called:"<<endl;
a=obj.a;
}
void display() {
cout << "number of object is "<<a << endl;

}

};
int main() {
number x(2), y(3), z(100) ;
z.display() ;
number z1(y);
z1.display() ;

return 0;
}