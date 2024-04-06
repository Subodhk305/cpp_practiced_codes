#include <iostream>
#include <cmath>
using namespace std;

class simp_calc {
protected:
    int a;
    int b;
public:
    void setdata(int s, int d) {
        a = s;
        b = d;
    }
    int sum() {
        return a + b;
    }
    int sub() {
        return a - b;
    }
    int mul() {
        return a * b;
    }
    int div() {
        return a / b;
    }
};

class sci_calc : public simp_calc {
public:
    int sq_rt() {
        return sqrt(a);
    }
};

class hybridclass : public simp_calc, public sci_calc {
public:
    void display() {
        cout << "Sum is: " << sum() << endl;
    }
    void display2() {
        cout << "Square root is: " << sq_rt() << endl;
    }
};

int main() {
    int ent;
    cout << "Do you want to use a scientific calculator or simple calculator: " << endl;
    cout << "For scientific calc(1) for simple calc(2): ";
    cin >> ent;

    if (ent == 1) {
        hybridclass s1;
        s1.setdata(5, 7);
        s1.sum() ;
        s1.display() ;
    } else {
        hybridclass s2;
        s2.setdata(8, 9);
        s2.sq_rt() ;
        s2.display2();
    }

    return 0;
}
