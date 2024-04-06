#include<iostream>
using namespace std;
int main()
{   
    float add();
    


    float (*func_ptr) () =&add;
    cout << "area of circle is :" <<(*func_ptr)()<< endl;
    return 0;
}
float add() {
    float r;
    cout << "enter radius:" << endl;
    cin>>r;
    return 3.14*r*r;
    }