#include<iostream>
using namespace std;
float area(int l, int b) {
cout << "area of rectangle is "<<l*b<< endl;
return 0;
}
int main()
{   float (*func_ptr)(int , int ) =&area;
    (*func_ptr) (5,6) ;
    (*func_ptr) (12,5) ;
    return 0;
}