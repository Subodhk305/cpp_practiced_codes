#include<iostream>
using namespace std;

void insertion_sort(int A[],int n) {
//int I=0;
    int j, key;
    for(int I=1; I<=n-1; I++) {
        j=I-1;
        key=A[I];
        while(I>=0 &&A[j]>key) {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

void display(int P[], int n) {
    for(int I=0; I<n; I++) {
        cout << P[I]<<"\t";
    }
}

void shell_sort(int A[],int n) {
//    int j=0, I=0;
    int gap=n/2;
    for(gap; gap>=1; gap=gap/2) {
        for(int j=gap; j<n; j++) {
            for(int I=j-gap; I>=0; I=I-gap) {
                if(A[I+gap]>A[I]) {
                    break;
                }
                else {
                    int temp=A[I];
                    A[I]=A[I+gap];
                    A[I+gap]=temp;
                }
            }
        }
    }
}
void merge(int a[],int lb,int mid,int ub);

void merge_sort(int a[],int lb, int ub) {
    int mid;
    if(lb<ub) {

        mid=(lb+ub) /2;
        merge_sort(a, lb, mid) ;
        merge_sort(a, mid+1,ub) ;
        merge(a, lb, mid, ub) ;
    }
}

void merge(int a[],int lb,int mid,int ub) {
    int I=lb;
    int j=mid+1;
    int k=lb;
    int count=10;
    int b[count];
    while(I<=mid &&j<=ub) {
        if(a[I]<a[j]) {
            b[k]=a[I];
            I++;
            k++;
        }
        else {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(I>mid) {
        while(j<=ub) {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else {
        while(I<=mid) {
            b[k]=a[I];
            I++;
            k++;
        }

    }
    for(k=lb; k<=ub; k++) {
        a[k]=b[k];
    }

}


int partition(int a[],int lb, int ub) {
    int pivot=a[lb];
    int start=lb;
    int end=ub;

    while(start<end) {

        while(a[start]<=pivot) {
            start++;
        }
        while(a[end]>pivot) {
            end--;
        }
        if(start<end) {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int t=a[lb];
    a[lb]=a[end];
    a[end]=t;

    return end;
}

void quick_sort(int a[],int lb,int ub) {
    if(lb<ub) {
        int loc=partition(a,lb, ub) ;
        quick_sort(a, lb, loc) ;
        quick_sort(a, loc+1,ub) ;
    }
}


int main()
{
    int a[]= {5,23,34,26,37,45,99,98,11,12};
//    insertion_sort(a, 6) ;
//    display(a, 6) ;
//    cout << endl;
//    shell_sort(a,10) ;
//    display(a, 10) ;
//   merge_sort(a, 0,9) ;
//    display(a, 10) ;


      quick_sort(a, 0,9) ;
      display(a, 10) ;
 
 

    
    return 0;
}