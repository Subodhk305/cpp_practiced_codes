#include<iostream>
using namespace std;
class complex{
   int a;
   int b;
   public:
   void setdata(int n1, int n2){
   a=n1;;
   b=n2;
   }
   friend complex frien_d(complex O1,complex O2);
   
   void display() {
   cout<<"complex no. is "<<a<<"+"<<b<<"i"<<endl;
}

};
complex frien_d(complex O1,complex O2) {
  complex O3;
  O3.setdata(O1.a+O2.a, O1.b+O2.b);
  return O3;

}

int main()
{ int a1, b1, a2, b2;
  complex c1, c2, sum;
  cout << "enter a1" << endl;
  cin >> a1;
  cout << "enter b1" << endl;
  cin >> b1;
  cout << "enter a2" << endl;
  cin >> a2;
  cout << "enter b2" << endl;
  cin >> b2;
  c1.setdata(a1,b1) ;
  c1.display() ;
  c2.setdata(a2,b2) ;
  c2.display() ;
  sum=frien_d(c1, c2) ;
  sum.display();
  return 0;
}  