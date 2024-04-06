#include<iostream>
using namespace std;

class subodh{
   int a;
   int b;
   public:
   subodh(void);
   void display () {
   cout << "complex no. is :"<<a<<"+"<<b<<"i"<< endl;
   
   }
};
subodh::subodh(void) {
  cout << "enter a:" << endl;
  cin>>a;
  cout << "enter b:" << endl;
  cin>>b;

}
int main() {

  subodh s1;
  s1.display() ;
  return 0;
}