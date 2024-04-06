#include<iostream>
using namespace std;
class polynomial {
public:
    int n;
    int m;
    int j;
    int k;
    int I;
    int arr1[10];
    int arr2[10];
    int arr3[10];
    int exp1[10];
    int exp2[10];
    int exp3[10];
    void set1() {
        cout << "enter no. of terms in first polynomial" << endl;
        cin>>n;
        for(int I=0; I<n; I++) {
            cout << "enter coefficient and exponential of each terms" << endl;
            cin>>arr1[I]>>exp1[I];
        }
    }
    void set2() {
        cout << "enter no. of terms in second polynomial" << endl;
        cin>>m;
        for(int I=0; I<m; I++) {
            cout << "enter coefficient and exponential of each terms" << endl;
            cin>>arr2[I]>>exp2[I];
        }
    }
    void add() {
        int I=0;
        int j=0;
        int k=0;
        while(I<n&&I<m) {
            if(exp1[I]==exp2[k]) {
                arr3[j]=arr1[I]+arr2[k];
                exp3[j]=exp1[I];
                j++;
                I++;
                k++;
            }

            else if(exp1[I]>exp2[k]) {
                arr3[j]=arr1[I];
                exp3[j]=exp1[I];
                I++;
                j++;
            }
            else if(exp2[I]>exp1[k]) {
                arr3[j]=arr2[k];
                exp3[j]=exp2[k];
                j++;
                k++;
            }
        }
        while(I<n) {
            arr3[j]=arr1[I];
            exp3[j]=exp1[I];
            I++;
            j++;

        }
        while(k<m) {
            arr3[j]=arr2[k];
            exp3[j]=exp2[k];
            k++;
            j++;

        }
    }
    void display() {

        cout << "sum of polynomials are:" << endl;
        for(int I=0; I<j; I++) {
            cout << arr3[I]<<"x^"<<exp3[I]<< endl;
            if(I<j-1) {
                cout << "+";
            }
        }
        cout << endl;
    }

};

int main()
{   polynomial pol;
    pol.set1() ;
    pol.set2() ;
    pol.add() ;
    pol.display() ;
    return 0;
}