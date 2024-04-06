#include<iostream>
using namespace std;

int main()
{   int rows1, rows2, columns1, columns2;
    cout << "enter no. of rows in first" << endl;
    cin>>rows1;
    cout << "enter no. of columns in first" << endl;
    cin>>columns1;
    
    cout << "enter no. of rows in second" << endl;
    cin>>rows2;
    cout << "enter no. of columns in second" << endl;
    cin>>columns2;
    int a[rows1][columns1];
    int b[rows2][columns2];
    int c[rows1][columns1];
    for(int I=0;I<rows1;I++) {
     for(int J=0;J<columns1;J++) {
     cout << "enter elements:" << endl;
     cin >>a[I][J];
     }
    }
    cout << "displaying elements in 2D array" << endl;
    for(int I=0;I<rows1;I++) {
     for(int J=0;J<columns1;J++) {
     //cout << "enter elements:" << endl;
     cout<<a[I][J]<<endl;
     }
    }
    
    for(int I=0;I<rows2;I++) {
     for(int J=0;J<columns2;J++) {
     cout << "enter elements:" << endl;
     cin >>b[I][J];
     }
    }
    cout << "displaying elements in 2D array" << endl;
    for(int I=0;I<rows2;I++) {
     for(int J=0;J<columns2;J++) {
     //cout << "enter elements:" << endl;
     cout<<b[I][J]<<endl;
     }
    }
    
    for(int I=0;I<rows1&&I<rows2;I++) {
     for(int J=0;J<columns1&&I<columns2;J++) {
      c[I][J]=a[I][J]+b[I][J];
     
     }
    }
    cout << "displaying elements in 2D array after addition " << endl;
    for(int I=0;I<rows2&&I<rows1;I++) {
     for(int J=0;J<columns2&&J<columns1;J++) {
     //cout << "enter elements:" << endl;
     cout<<c[I][J]<<endl;
     }
    }
    
    return 0;
}