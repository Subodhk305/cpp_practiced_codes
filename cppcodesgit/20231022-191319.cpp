#include<iostream>
#include<string.h>
using namespace std;
struct vector2{
float x, y;

vector2 add(const vector2&other){
return vector2(x+other.x) ;
}
vector2 multiply(const vector2&other){
return vector2(x*other.x) ;
}

vector2 operator+(const vector2&other) {
return add() 
}
};
int main()
{   
    return 0;
}