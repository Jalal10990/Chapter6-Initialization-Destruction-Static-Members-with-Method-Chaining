
#include<iostream>
using namespace std;

class Small{
   private:
    int x; 

    public:
    void set(int v);  //declared // only tells compiler: this function exists
    void show() const {
        cout<< x << " \n"; //inine
    }
};
//defined outside with scope resolution operator
void Small::set(int v){
    x = v;
}
//it tells the compiler this function belongs to Small.

int main(){
    Small s;
    s.set(42);
    s.show();  //42
}