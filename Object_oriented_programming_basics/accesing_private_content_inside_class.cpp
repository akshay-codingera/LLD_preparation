#include<iostream>
using namespace std;

// how to access the private content of the class(its for data protection)
class student
{
    // what actually a class is a user define data type , blueprint for creating objects
    string name;
    int age, rollnumber;
    string grade;
    int admitcardnumber;

    public:

    // introducing the set function to change the value of the private content ;
   void setname(string s)
    { name = s;}
   void setage(int i)
    {age = i;}
   void setrollnumber(int r)
    {rollnumber = r;}
   void setgrade(string g)
    {grade = "A";}
    void setadmitcardnumber(int i)
    { admitcardnumber = i;}

    // introducing the get function to view the values of the private content ;
    string getname()
    {return name; }
    string getgrade()
    {return grade;}
    int getage()
    { return age;}
    int getrollnumber()
    {return rollnumber;}

    int getadmitcardnumber(int pin)
    {
        if(pin == 123)
        cout<< admitcardnumber;
    }

};

int main()
{
    //it is a entity that has a state and behaviour , anything that exist in physical world
    student s1;
    // 
    student s2;
    s1.setname("Akshay");
    s1.setrollnumber(433);
    s1.setage(23);
    s1.setgrade("A");
    s1.setadmitcardnumber(232323);

    cout<< s1.getadmitcardnumber(123);
  cout<<   s1.getname();
    s2.setname  ("Mohit");
    s2.setrollnumber(433);
    s2.setage (23);
    s2.setgrade("A");
  cout<<   s2.getrollnumber();
    return 0;
}

// this will increase functionality other then just reading and writng the data;
// i can check if its a valid name and if we want to access the age a pin is to be submitted so we can add this kind of things

