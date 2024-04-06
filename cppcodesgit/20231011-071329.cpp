#include<iostream>
using namespace std;
class sub {
public:
    static int count;
    void val() {

        for (int I=0; I<2; I++) {
            cout << "value of count:"<<count << endl;
            count++;
        }
    }

};
int sub::count=0;
int main()
{   sub s1;
    sub s2;
    s1.val() ;
    s2.val() ;
    return 0;
}