#include<iostream>
using namespace std;

class st {
    public:
    void func1() {
        static int count;
        
        cout << "value of static count variable is:" <<count<< endl;
        count++;
    }
};
int main()
{
    st s1;
    cout << "first object:" << endl;
    for (int I=0; I<5; I++) {
        s1.func1() ;

    }
    cout << "second object:" << endl;
    st s2;
    for (int I=0; I<5; I++) {
        s2.func1() ;

    }
    return 0;
}