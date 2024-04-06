#include<iostream>
using namespace std;
class subodh{
public:
int x;
subodh(int y) {
x=y;
}

subodh(subodh &a) {
x=a.x;

}
void display () {
cout << "value of x is :"<<x << endl;
}
};
int main()
{   int s;
    cout << "enter value of x:" << endl;
    cin>>s;
    subodh s1(s) ;
    s1.display() ;
    subodh s2(s1) ;//copy constructor
    
    s2.display() ;
    return 0;
}