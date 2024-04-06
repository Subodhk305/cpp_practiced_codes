#include<iostream>
using namespace std;

int main()
{
    int arr[]={50,60,70,80,90,100};
    int* ptr=arr;
    for(int I=0;I<5;I++) {
    cout << "value at "<<I+1<<" position:";
    cout <<*ptr << endl;
    ptr++;
    }
    return 0;
}