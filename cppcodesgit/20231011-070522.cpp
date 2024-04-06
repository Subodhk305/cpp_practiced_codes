#include<iostream>
using namespace std;
class subodh{
public:
int x;
void set(int m) {
x=m;
cout << "value of 1 st x:"<<x << endl;
}
subodh() {
cout << "hello" << endl;
}
subodh(subodh &s){
x=s.x;
cout << "value of x:"<<x << endl;
}

};
int main()
{   subodh s1;
    s1.set(23) ;
    subodh s2(s1) ;
    
    return 0;
}