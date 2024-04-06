#include<iostream>
using namespace std;
class stu{
 int x, y, z, w;
 public:
 stu(int a, int b,int c ,int d) {
 x=a;
 y=b;
 z=c;
 w=d;
 
 }
 void display() {
 cout << "point is ("<<x<<","<<y<<")"<< endl;
 }


};
int calc(x, y, z, w) {
  int g;
  int h;
  g=(z-x)*(z-x);
  h=(w-y)*(w-y) ;

}
int main() {
stu s1(4,5);
s1.display();
return 0;
}