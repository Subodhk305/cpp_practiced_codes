#include<iostream>
using namespace std;
class bankdeposite {
    int principal;
    int years;
    double interest_rate;
    int returnam;
public:
    bankdeposite() {};
    bankdeposite(int p, int y, float r) {
        principal=p;
        years=y;
        interest_rate=r;
        returnam=principal;
        for (int I=0; I<=years; I++) {

            returnam=returnam*(1+interest_rate);
        }

    }
    bankdeposite(int p, int y, int R) {
        principal=p;
        years=y;
        interest_rate=(float(R) /100);
        returnam=principal;
        for (int I=0; I<=years; I++) {

            returnam=returnam*(1+interest_rate);
        }

    }

    void display();


};
void bankdeposite::display() {

    cout << "amount before giving to bank:"<<principal<<endl<<"after "<<years<<"years amount is :"<<returnam<< endl;
}
int main() {
    int p, y;
    float r;
    int R;
    char hel;
    bankdeposite b1, b2, b3;
    cout << "is your interest in %"<<endl<<"if yes than enter (y) if no than enter (n)" << endl;
    cin>>hel;
    if (hel=='n') {
        cout << "enter you principal amount:" << endl;
        cin>>p;
        cout << "how many years you want to keep your money in stocks:" << endl;
        cin>>y;
        cout << "enter interest rate:" << endl;
        cin>>r;
        b1= bankdeposite(p, y, r) ;
        b1.display() ;
    }
    else {
        cout << "enter you principal amount:" << endl;
        cin>>p;
        cout << "how many years you want to keep your money in stocks:" << endl;
        cin>>y;
        cout << "enter interst rate:" << endl;
        cin>>R;
        b2= bankdeposite(p, y, R) ;
        b2.display() ;
    }
    

    return 0;
}