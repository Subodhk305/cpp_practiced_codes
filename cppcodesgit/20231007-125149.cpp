#include<iostream>
using namespace std;
class sum {
public:
    int a, b;
    void set(int x, int y) {
        a=x;
        b=y;
    }
    void setbyobj(sum s1, sum s2) {
        a=s1.a+s2.a;
        b=s1.b+s2.b;
    }
    void displaysum() {
        cout << "value of sum is:" <<a+b<< endl;
        //friend void complex(sum obj1, sum obj2) ;
    }
    
    friend void complex(sum obj1, sum obj2) ;
};
void complex(sum obj1, sum obj2) {
    sum s4;
    s4.set(obj1.a+obj2.a, obj1.b+obj2.b) ;
    cout <<"by complex object "<<(s4.a+s4.b) << endl;
}
int main()
{   sum s1;
    s1.set(5, 7) ;
    s1.displaysum() ;
    sum s2;
    s2.set(5, 7) ;
    s2.displaysum() ;
    sum s3;
    s3.setbyobj(s1, s2) ;
    s3.displaysum() ;
    complex(s1, s2) ;

    return 0;
}