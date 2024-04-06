#include <iostream>
using namespace std;

template <class T>
class subodh {
public:
    T a;
    T b;
    
    subodh(T a, T b) {
        this->a = a;
        this->b = b;
    }

    void swapValues() {
        T temp = this->a;
        this->a = this->b;
        this->b = temp;
    }

    void display() {
        cout << a << endl << b << endl;
    }
};

int main() {
    int a = 8;
    int b = 9;

    subodh<int> s1(a, b);
    s1.display();
    
    s1.swapValues();
    cout << "After swapping:" << endl;
    s1.display();

    return 0;
}
