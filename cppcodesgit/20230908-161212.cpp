#include<iostream>
using namespace std;
class employee{
 public:
 int id;
 float salary;
 employee(int ide) {
 id=ide;
 salary=50000;
 cout <<id<< endl;
 cout <<salary<< endl;
 
 }
employee() {};
};
class CEO:public employee{
public:
int langid;
CEO(int iide){
id=iide;
langid=20;
} 
};
int main() {
employee paras(36);
cout <<paras.salary<< endl;
CEO s1(23);

cout <<s1.id<< endl;
return 0;
}