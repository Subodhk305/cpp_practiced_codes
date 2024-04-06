#include<iostream>
#include<string.h>
using namespace std;
struct vector2{
float x, y;
vector2(int p, int q):p(x),q(y){}
vector2 add(const vector2&other){
return vector2(x+other.x,y+other.y) ;
}
vector2 multiply(const vector2&other){
return vector2(x*other.x,y+other.y) ;
}

vector2 operator+(const vector2&other) {
return add(other) 
}
vector2 operator*(const vector2&other) {
return multiply(other) 
}
};
int main()
{   float a, b;
    cout << "enter a and b;" << endl;
    cin>>a>>b;
    vector2 s1(a, b) ;
    vector2 s2(a, b) ;
    
    vector2 res1=s1.add(s2) ;
    vector2 res2=s1+s2;
    cout << "x:" <<res1.x<<" y:"<<res1.y<< endl;
    
    cout << "x:" <<res2.x<<" y:"<<res2.y<< endl;
    return 0;
}