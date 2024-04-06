#include<iostream>
using namespace std;
class n{
public:
int *height;
int *width;
int *ar;
n(int b, int k, int l) {
height=new int ;
width=new int;
ar=new int[l];
*height=b;
*width=k;
}
~n() {
cout << "destructor is called" << endl;
delete height;
delete width;
delete[] ar;
}
int area();
void display () ;
};

int n::area() {
return (*height) *(*width) ;
}
void n::display() {
cout << "area is :"<<area()<< endl;
}
int main()
{   n s1(218,256,5);
    s1.area() ;
    s1.display () ;
    
    return 0;
}