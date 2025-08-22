
#include<iostream>
#include <cmath>
// using namespace std;

class Vec2{
    //Class Vec2 represents a 2D vector with two coordinates: x and y.
    // Both are initialized with 0 using in-class member initialization (float x{0}, y{0};).
    float x{0}, y{0};

    public:
    //Both methods return a reference to the current object (*this).
    Vec2& setX(float v){
        x = v;
        return *this;
    }
    Vec2& setY(float v){
        y==v;
        return *this;
    }
    //This allows method chaining, meaning you can call multiple functions on the same object in a single line:
    float length() const;
//The const at the end means this function does not modify the object’s data members.
};

float Vec2::length() const{
    return std::sqrt(x*x + y*y);
}


int main(){
    Vec2 v;
    v.setX(3).setY(4);
    
std::cout<<"Length of vector: "<< v.length()<< "\n";
    return 0;
}