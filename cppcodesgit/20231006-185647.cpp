#include<iostream>
using namespace std;
class poly {
public:
    int n,m;
    int k;
     
    int *arr1=new int[10];
    int *exp1=new int[10];
    int *arr2=new int[10];
    int *exp2=new int[10];
    int *arr3=new int[30];
    int *exp3=new int[30];
    void set() ;
    void display() ;
 //   void multiply() ;
    void multiply() {
    k=0;
    for(int I =0; I<n; I++) {
        for(int j=0; j<m; j++) {
            arr3[k]=arr1[I]*arr2[j];
            exp3[k]=exp1[I]+exp2[j];
            k++;
        }
    }
}
};
void poly::set() {

    cout << "enter no. of terms to be added in first poly" << endl;
    cin>>n;
    cout << "enter no. of terms to be added in second poly" << endl;
    cin>>m;
    cout << "enter coefficient and exp for first array:" << endl;
    for(int I=0; I<n; I++) {
        cin>>arr1[I]>>exp1[I];
    }
    cout << "enter coefficient and exp for second array:" << endl;
    for(int I=0; I<m; I++) {
        cin>>arr2[I]>>exp2[I];
    }
}


void poly::display() {
    cout << "first polynomial:" << endl;
    for(int I=0; I<n; I++) {
        cout <<arr1[I]<<"x^"<<exp1[I];
        if(I<n-1) {
            cout << "+";
        }
    }
    cout << endl;
    cout << "second polynomial:" <<endl;
    for(int I=0; I<m; I++) {
        cout <<arr2[I]<<"x^"<<exp2[I];
        if(I<m-1) {
            cout << "+";
        }
    }
    cout << endl;
    cout << "multiplied polynomial:" << endl;
    for(int I=0; I<k; I++) {
        cout <<arr3[I]<<"x^"<<exp3[I];
        if(I<k-1) {
            cout << "+";
        }
    }
}
int main()
{   poly p1;
    p1.set() ;
//    p1.display() ;
    p1.multiply() ;
    p1.display() ;
    return 0;
}