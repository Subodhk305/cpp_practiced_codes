#include<iostream>
using namespace std;

bool issafe(int **arr, int x, int y, int n) {

    for(int r=0; r<n; r++) {
        if(arr[r][y]==1) {
            return false;
        }
    }

    int row=x;
    int col=y;
    while(row>=0 && col>=0) {
        if(arr[row][col]==1) {
            return false;
        }
        row--;
        col--;
    }

    row=x;
    col=y;
    while(row>=0 && col<n) {
        if(arr[row][col]==1) {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool nQueen(int **arr, int x, int n) {
    if(x>=n) {
        return true;
    }

    for(int col=0; col<n; col++) {
        if(issafe(arr, x, col, n)) {
            arr[x][col]=1;
            if(nQueen(arr, x+1,n)) {
                return true;
            }

            arr[x][col]=0;
        }

    }
    return false;
}

int main()
{   cout << "enter n:" << endl;
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int I=0; I<n; I++) {
        arr[I]=new int[n];
        for(int j=0; j<n; j++) {
            arr[I][j]=0;
        }
    }

    if(nQueen(arr,0,n)) {
        for(int I=0; I<n; I++) {
            for(int j=0; j<n; j++) {
                cout <<  arr[I][j];
            }
            cout << endl;
        }

    }
    return 0;
}