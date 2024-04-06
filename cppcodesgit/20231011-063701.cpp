#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50,60};
    int *ptr=arr;
    for(int I=0;I<6;I++) {
    cout << "value at position "<<I+1<<" is :"<<*(ptr++)<<endl;
    // ptr++;
    }
    return 0;
}