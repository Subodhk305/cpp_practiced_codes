#include<iostream>
using namespace std;
template<class T>
class subodh {
public:
    T a;
    T b;
    T temp;
    void display() ;
    subodh(T &a, T &b) {

        this->temp=this->b;
        this->b=this->a;
        this->a=this->temp;

    }
};
template<class T>
void subodh<T>::display() {
    cout <<a<<endl<<b<< endl;
}


int main()
{   int a, b;
    a=8;
    b=9;

    subodh<int>s1(a,b) ;
    s1.display() ;

    return 0;
}