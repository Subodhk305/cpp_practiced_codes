#include<iostream>
using namespace std;
class a {
public:
    int x;
    a(int p) {
        x=p;
    }
    void operator++() {
        x=x+2;
        
    }
    void display() {
     cout << "value of x:"<<x << endl;
    }
};
int main()
{   cout << "enter:" << endl;
    int m;
    cin>>m;
    a d(m);
    ++d;
    d.display();
    return 0;
}