#include<iostream>
using namespace std;
void dispaly(float (*a)(int),int) ;
float area(int) ;
int main()
{

    cout << "enter radius:" << endl;
    int r;
    cin>>r;
    area( r) ;
    dispaly(area,  r);
    return 0;
}
float area(int r) {
    return 3.14*r*r;
}
void dispaly(float (*a)(int),int r) {
    cout << "area of circle of radius R="<<r<<" is "<<a(r)<< endl;
}