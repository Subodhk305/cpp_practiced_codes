#include<iostream>
#include<algorithm>
using namespace std;
void search_sequence(int a[],int key) {
    int n=6;
    for(int I=0; I<n; I++) {
        if(a[I]==key) {
            cout << "element found at position: " <<I+1<< endl;
            return;
        }

    }
    cout << "absent:" << endl;

}

void search_binary(int a[],int key, int lb, int ub) {
    int mid;
    while(lb<=ub) {
        mid=(lb+ub) /2;

        //     mid = lb + (ub - lb) / 2;
        if(a[mid]==key) {
            cout << "element found" << endl;
            return;
        }
        else if(a[mid]>key) {
            ub=mid-1;
        }
        else {
            lb=mid+1;

        }
    }
    cout << "element absent" << endl;
}


void interpolation(int a[], int key, int lb, int ub) {
    int n = 6;
    int pos;
    while (lb <= ub && key >= a[lb] && key <= a[ub]) {
        pos = lb + ((key - a[lb]) * (ub - lb)) / (a[ub] - a[lb]);

        if (a[pos] == key) {
            cout << "element found at position: " << pos + 1 << endl;
            return;
        } else if (a[pos] < key) {
            lb = pos + 1;
        } else {
            ub = pos - 1;
        }
    }
    cout << "element absent" << endl;
}


int main()
{
    int a[]= {11, 12, 14, 23, 55, 66};
    cout << "search:" << endl;
    int p;
    cin>>p;
    //  search_sequence(a,p) ;
//   search_binary(a, p, 0,5) ;
    //int b[]={1,3,5,7,9,11};
   int b[] = {1, 5, 9, 13, 17, 21};

    
    sort(b, b+6) ;
    interpolation(b, p, 0,5) ;
    return 0;
}