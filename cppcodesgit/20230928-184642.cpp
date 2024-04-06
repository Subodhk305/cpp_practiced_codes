#include<iostream>
using namespace std;

int main()
{   int rows, columns;
    cout << "enter no. of rows" << endl;
    cin>>rows;
    cout << "enter no. of columns" << endl;
    cin>>columns;
    int a[rows][columns];
    for(int I=0;I<rows;I++) {
     for(int J=0;J<columns;J++) {
     cout << "enter elements:" << endl;
     cin >>a[I][J];
     }
    }
    cout << "displaying elements in 2D array" << endl;
    for(int I=0;I<rows;I++) {
     for(int J=0;J<columns;J++) {
     //cout << "enter elements:" << endl;
     cout<<a[I][J]<<endl;
     }
    }
    return 0;
}