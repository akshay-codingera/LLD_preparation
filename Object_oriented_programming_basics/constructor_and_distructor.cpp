#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // Constructor
    Student() {
        roll = 1;
        name = "Akshay";
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1;   // object created
    cout << s1.roll << endl;
    cout << s1.name << endl;
    return 0;
}
