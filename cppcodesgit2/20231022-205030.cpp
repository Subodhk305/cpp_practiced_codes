#include<iostream>
using namespace std;
void fun(int n) {
cout <<n;
if(n>0) {
fun(n-1);
fun(n-1);
}
}
int main()
{   int x=3;
    fun(x) ;
    
    return 0;
}