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
    int arr3[10];
    int exp3[10];

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

    void add() {
        int i = 0;
        int k = 0;

        while (i < n && k < m) {
            if (exp1[i] == exp2[k]) {
                arr3[j] = arr1[i] + arr2[k];
                exp3[j] = exp1[i];
                i++;
                k++;
                j++;
            }
            else if (exp1[i] > exp2[k]) {
                arr3[j] = arr1[i];
                exp3[j] = exp1[i];
                i++;
                j++;
            }
            else {
                arr3[j] = arr2[k];
                exp3[j] = exp2[k];
                k++;
                j++;
            }
        }

        // Copy remaining terms from the first polynomial
        while (i < n) {
            arr3[j] = arr1[i];
            exp3[j] = exp1[i];
            i++;
            j++;
        }

        // Copy remaining terms from the second polynomial
        while (k < m) {
            arr3[j] = arr2[k];
            exp3[j] = exp2[k];
            k++;
            j++;
        }
    }

    void display() {
        cout << "The sum of the polynomials is:\n";
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
    poly.add();
    poly.display();
    
    return 0;
}
