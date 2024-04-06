#include<iostream>
using namespace std;
class sub{
public:
int *height ;
int *width;
sub(int p, int q) {
height=new int;
width=new int;
*height=p;
*width=q;
}
~sub() {//destructor deletes memory after object is terminated
delete height;
delete width;
cout << "destructor is called " << endl;
}
int area() {

return (*height)*(*width) ;
}

void display() {
cout << " area is :" <<area()<< endl;
}
};

int main()
{   cout << "enter x:" << endl;
    int x;
    cin>>x;
    int y;
    cout << "enter y:" << endl;
    cin>>y;
    sub s1(x, y);
    s1.area();
    s1.display();
    return 0;
}