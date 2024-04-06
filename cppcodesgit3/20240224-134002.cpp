#include<iostream>
using namespace std;

int partition (int a[],int lb, int ub) {
 int start=lb;
 int end=ub;
 int pivot=a[lb];
 int temp;
 while(start<end) {
  while(a[start]<=pivot) {
   start++;
  }
  while(a[end]>pivot) {
   end--;
  }
  if(start<end) {
   temp=a[start];
   a[start]=a[end];
   a[end]=temp;
  }
 }
 if(start>end) {
   temp=a[end];
   a[end]=a[lb];
   a[lb]=temp;
 }
 return end;
}

void quicksort(int a[],int lb, int ub) {
 if(lb<ub) {
  int loc=partition(a,lb, ub) ;
  quicksort(a,lb, loc-1) ;
  quicksort(a, loc+1,ub) ;
 }
 
}
int main()
{   int a[]={10,9,8,7,6,5,4,3,2,1};
    quicksort(a,0,9) ;
    for(int I=0;I<10;I++) {
     cout << a[I]<<"\t"<< endl;
    }
    return 0;
}