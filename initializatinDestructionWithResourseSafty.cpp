
#include<iostream>
#include<string>
class User{

    std::string name; //a string (dynamic memory managed internally by std::string)
    int age;

    public:
    User(std::string n, int a) : name(std::move(n)), age(a) {};

    void show(){
        std::cout<<name<<""<<age;
    }
    //initializes members directly before entering the constructor body.
    //init-list is best
    //More efficient than assigning inside the constructor body (avoids unnecessary default construction followed by reassignment).
    //std::move(n):
    //Moves the temporary string n into name without copying it (efficient for large strings).
//Why is init-list better?

// Direct initialization = no extra copy or re-construction.

// Mandatory for const members or reference members, which cannot be assigned later.
    ~User() = default; 
    // No manual cleanup needed because:

// std::string manages its own memory automatically (RAII).

// int is a primitive type (no dynamic resource).
};
int main(){
    User u("Shah jalal", 23); 
    u.show();
    //constructor called , memory for name is allocated

    return 0;
}//destrocted automatically called here , memory freed
//RAII (Resource Acquisition Is Initialization)
//Here, std::string is an example of RAII:

// It allocates memory when the string is created.

// It automatically releases that memory when the object is destroyed.

// Initialization list = efficient & necessary for proper member initialization.

// std::move avoids unnecessary copy when passing temporary or disposable data.

// Default destructor is enough when your class contains only RAII-compliant members.

// This design follows safe, modern C++ principles.