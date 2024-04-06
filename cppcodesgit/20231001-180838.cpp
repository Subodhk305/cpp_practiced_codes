#include<iostream>
using namespace std;

class Polynomial {
private:
    int n;
    int m;
    int j;

    int arr1[10];
    int arr2[10];
    int exp1[10];
    int exp2[10];
    int arr3[100]; // Increased array size to accommodate multiplication
    int exp3[100]; // Increased array size to accommodate multiplication

public:
    Polynomial() {
        n = 0;
        m = 0;
        j = 0;
    }

    void set1() {
        cout << "Enter the number of terms for the first polynomial: ";
        cin >> n;

        cout << "Enter the coefficients and exponents for the first polynomial:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr1[i] >> exp1[i];
        }
    }

    void set2() {
        cout << "Enter the number of terms for the second polynomial: ";
        cin >> m;

        cout << "Enter the coefficients and exponents for the second polynomial:\n";
        for(int i = 0; i < m; i++) {
            cin >> arr2[i] >> exp2[i];
        }
    }

    void multiply() {
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                arr3[j] = arr1[i] * arr2[k];
                exp3[j] = exp1[i] + exp2[k];
                j++;
            }
        }
    }

    void display() {
        cout << "The product of the polynomials is:\n";
        for (int i = 0; i < j; i++) {
            cout << arr3[i] << "x^" << exp3[i];
            if (i < j - 1) {
                cout << " + ";
            }
        }
        cout << endl;
    }
};

int main() {
    Polynomial poly;
    poly.set1();
    poly.set2();
    poly.multiply();
    poly.display();
    
    return 0;
}
    