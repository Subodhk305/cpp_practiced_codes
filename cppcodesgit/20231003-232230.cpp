#include<iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    int a=55;
    void *p=&a;
    
    cout << "val of void ptr:"<<*(int*)p << endl;
    return 0;
}