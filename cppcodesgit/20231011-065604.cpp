#include<iostream>
using namespace std;
class maths{
public:
int data1;
void setdata(int n) {
data1=n;
}
void display () {
cout << "data1="<<data1 << endl;
}
};

int main()
{   maths *m1=new maths[4];
    int m;
    for(int I=0;I<4;I++) {
    cout << "enter data1 for "<<I+1<<" OBJECT OF ARRAY"<< endl;
    cin>>m;
    m1->setdata(m) ;
    m1->display() ;
    }
    
    
    return 0;
}