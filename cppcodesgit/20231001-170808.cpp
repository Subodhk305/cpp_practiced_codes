#include<iostream>
using namespace std;

class sub
{
public:
    int n;
    int m;
    int j; // Move j out of here

    int arr1[10];
    int arr2[10];
    int exp1[10];
    int exp2[10];
    int arr3[10];
    int exp3[10];

    sub() {
        
        j = 0; // Initialize j in the constructor
    }

    void set1() {
        cout << "how many terms are needed in first array? " << endl;
        cin >> n;

        for(int I=0; I<n; I++) {
            cout << "enter coefficient" << endl;
            cin >> arr1[I];
            cout << "enter exponential" << endl;
            cin >> exp1[I];
        }
    }

    void set2() {
        cout << "how many terms are needed in second array? " << endl;
        cin >> m;

        for(int I=0; I<m; I++) {
            cout << "enter coefficient" << endl;
            cin >> arr2[I];
            cout << "enter exponential" << endl;
            cin >> exp2[I];
        }
    }

    void add() {
        // Compare and add arrays here
        for(int I=0; I<n || I<m; I++) {
            if(exp1[I] == exp2[I]) {
                arr3[j] = arr1[I] + arr2[I];
                exp3[j] = exp1[I];
                j++;
            }
        }
        
        
    }

    void display() {
        cout << "polynomial is:" << endl;
        for (int I=0; I<j; I++) {
            cout << arr3[I] << "x^" << exp3[I];
        
        if (I<j-1){
        cout << "+";
        }
        }
        
    }
};

int main() {
    sub s1;
    s1.set1();
    s1.set2();
    s1.add();
    s1.display();
    
    return 0;
}
    