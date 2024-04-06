#include<iostream>
using namespace std;
class a {
public:
    double v, b;

    a(double p,double q) {
        v=p;
        b=q;
    }

    void division() {
        try {
            if(b!=0) {
                double c=v/b;
                cout << "division:"<<c << endl;
            }
            else {
                throw(b) ;
            }
        }
        catch(double b) {
            cout << "cannot divide by zero" << endl;
        }

    }
};
int main()
{   cout << "enter a and b:" << endl;
    int d, f;
    cin>>d>>f;
    a b(d,f) ;
    b.division() ;
    return 0;
}