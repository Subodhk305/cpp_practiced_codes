#include<iostream>
using namespace std;

class sub
{
public:
    int n;
    int arr1[10];
    int arr2[10];
    int exp1[10];
    int exp2[10];
    void set() {
        cout << "how many terms are needed? " << endl;
        cin >> n;

        for(int I=0; I<n; I++) {
            cout << "enter coefficient" << endl;
            cin>>arr1[I];
            cout << "enter exponential" << endl;
            cin >> exp1[I];

        }
    }
    
    void display() ;


};

void sub::display() {
    int n;
    cout << "polynomial is:" << endl;
    for (int I=0; I<n; I++) {

        cout <<arr1[I]<<"x^"<<exp1[I]<<"+";
    }
}
int main() {
    sub s1;
    s1.set() ;
    s1.display() ;
    return 0;
}