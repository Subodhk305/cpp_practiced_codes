#include <iostream>
#include <string>
using namespace std;
struct Vector2 {
    float x, y;

    Vector2(float x, float y) : x(x), y(y) {}

    Vector2 Add(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator+(const Vector2& other) const {
        return Add(other);
    }

    Vector2 Multiply(const Vector2& other) const {
        return Vector2(x * other.x, y * other.y);
    }

    Vector2 operator*(const Vector2& other) const {
        return Multiply(other);
    }
};

int main() {
    float a, b;
    cout << "enter a and b:" << endl;
    cin>>a>>b;
    Vector2 position(a, b);
    Vector2 speed(a, b);

    Vector2 result = position.Add(speed);
    Vector2 result2 = position+speed; 
    
    Vector2 opt = position.Multiply(speed);
    Vector2 opt2 = position*speed; 
    
    cout<<"x="<<result.x<<" y:"<<result.y<<endl;
    cout<<"x="<<result2.x<<" y:"<<result2.y<<endl;
    
    cout<<"x="<<opt.x<<" y:"<<opt.y<<endl;
    cout<<"x="<<opt2.x<<" y:"<<opt2.y<<endl;
  //  std::cin.get();
    return 0;
}
