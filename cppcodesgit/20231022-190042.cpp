#include<iostream>
using namespace std;
class s{
public:
int a, b;
void set() {
cout << "enter a and b:" << endl;
cin>>a>>b;

}
inline int add() {
  return a+b;
}
void display() {
cout << "addition is:" <<add()<< endl;
}
};
int main()
{   s s2;
    s2.set() ;
    s2.add() ;
    s2.display() ;
    
    return 0;
}