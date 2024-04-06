#include<iostream>
using namespace std;

class subodh {
public:
    int n;
    int count=0;
    void get_data() {
    cout << "DIVISIBLITY CHECK WITH 7" << endl;
    cout << "enter a no." << endl;
    cin >> n;
    
    }
    void check_div();
};

void subodh::check_div() {
    if (n%7==0) {
        cout << "divisible by 7" << endl;
        
    }
    else {
        cout << "not divisible by 7" << endl;
    }
}

int main()
{   subodh s1;
    s1.get_data() ;
    s1.check_div() ;

    return 0;
}