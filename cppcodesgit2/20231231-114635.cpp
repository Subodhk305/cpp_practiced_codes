#include<iostream>
using namespace std;
 
 class data{
 public:
  int a;
  int b;
  mutable int c;
  
  data() :a(1), b(2), c(3) {}
   void display() const {
  cout << "a :"<<a << endl;
  cout << "b :"<<b << endl;
  cout << "c :"<<c << endl;
  }
 };
int main()
{   const data p;
    p.c=23;
    p.display() ;
    
    cout <<  endl;
    
    
    data d;
    d.a=23;
    d.display() ;
     
    return 0;
}