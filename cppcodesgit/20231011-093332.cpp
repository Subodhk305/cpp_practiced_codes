#include<iostream>
using namespace std;

int main()
{
    int *nu_ptr=NULL;
    cout << "value at null pointer"<<nu_ptr << endl;
    int a=5;
    void *v_ptr=&a;
    cout << "value at void pointer after typecasting "<<*(int*)v_ptr<< endl;
    return 0;
}