#include<iostream>
#include<cmath>
using namespace std;
class stu{
 public:
 int x1, y1, x2, y2;
 double ans;
 
 stu(int a, int b,int c ,int d) {
 x1=a;
 y1=b;
 x2=c;
 y2=d;
 ans=0.0;
 }
 calc(int x1, int y1,int x2, int y2) {
  int g;
  int h;
  
  g=(x2-x1)*(x2-x1);
  h=(y2-y1)*(y2-y1);
  ans=sqrt(g+h);
  
}
 void calc(int x1, int y1,int x2, int y2);
 void display() {
 cout <<ans<< endl;
 }
 };
int main() {
stu s1(2,8,5,9);
s1.display();
return 0;
}