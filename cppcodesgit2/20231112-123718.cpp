#include<iostream>
using namespace std;
class a {
public:
    int v, b;

    a(int p, int q) {
        v=p;
        b=q;
    }

    void division() {
        try {
            if(b!=0) {
                int c=v/b;
                cout << "division:"<<c << endl;
            }
            else {
                throw(b) ;
            }
        }
        catch(int b) {
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