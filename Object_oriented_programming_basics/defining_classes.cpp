#include<iostream>
using namespace std;


// convential way that will increase effort and will cause me creat seprate variable each time that too unique
/*
int main()
{
    string name;
    int age,rollnumber;
    string grade;

    cin>>name>>age>>grade>>rollnumber;

    string name1;
    int age1,rollnumber1;
    string grade1;

    cin>>name1>>age1>>grade1>>rollnumber1;
    return 0;
} */


// we could have created array for each entity 
/* string name[5]; int age[5]; int rollnumber[5]; string grade[5];*/

// but the better way to creat a class and call student using this and (thus making work easier and practical)

class student  // we can include data and function
{

    // by default it is private;
    public:
    string name;
    int age;
    int rollnumber;
    string grade;
};

int main()
{
    student s1;
    s1.name = "Akshay";  // i cannot access them 
    s1.age = 23;
    s1.rollnumber = 789;
    s1.grade= "A";
    cout<<s1.age<<" ";

     student s2;
    s2.name = "Mohit";  // i cannot access them 
    s2.age = 23;
    s2.rollnumber = 689;
    s2.grade= "B";
    cout<<s2.age<<" ";


}
