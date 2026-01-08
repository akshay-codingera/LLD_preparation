#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int rollnumber;
    string grade;
};

int main()
{
    student s1;
    // static memory allocation;

    // paranthesis are used to call function;
    // s1.name("Akshay");
    // s1.age(34);
    // s1.grade("A");
    // s1.rollnumber(344);

    s1.name="Akshay";
    s1.age=34;
    s1.grade="A";
    s1.rollnumber=344;

    cout<<  s1.name<<endl<<s1.age<<endl<< s1.grade<<endl<<s1.rollnumber<<endl;

    // using dynamic memory allocation

//its something we are giving the  address of the starting point of the object generated from the class
             // data is stored either in the stack or heap (so when we force data with new keyword it goes into the heap) else it goes in the stack
student *s = new student;   
cout<<"\n this have been done dynamically with the help of pointers\n";
(*s).name="Rohit";
s->age= 34;
s->grade="B";
(*s).rollnumber= 788;

cout<<s->name<<endl<<s->age<<endl<<s->grade<<endl<<s->rollnumber<<endl;

    return 0;
}
