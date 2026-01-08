//pading occurs in transfering data from class if needed 
#include<iostream>
using namespace std;
// okay so see one thing happen there are two rules for question point n byte datatype takes its addresss always at a multiple of the their datatype
// the final size should be completly divisible by the maximum respective datatype in the class
class student
{
    
};

class bank
{
    int accountnumber;
};

class car
{
    char initial;
    int number;
};

class bike
{
    int number;
    char intitial ;
};


class automata
{
    char a;
    char b;
    int d;
};

class fsm
{
    char a;
    int d;
    char b;
};

class dfa 
{
    char a;
    char b; 
    int d; 
    double e;
};

class finalt
{
    char a;
    int b;
    char e;
    double d;
};


int main()
{
    cout<< " this program will give us idea of the pading besed on the respective size and how data will stream ";
    // objects of the classes 
    student s1;  //(give a unique address to be distinct)
    car c1;      //(i000nnnn) = 8;
    bank b1;     //(aaaa)=4;
    bike b2;     //(nnnni000)=8;
    fsm f1;      //(a000ddddb000)=12;
    dfa d1;      //(ab00ddddeeeeeeee)=16;
    finalt f2;   //(a000bbbbd0000000eeeeeeee)=24;
    automata a1; //(ab00ddddd)=8;
    
    cout<< "\nlets continue";
    cout<<sizeof(s1);  // 0  but it comes 1;  // because it 0 size denote empty space and empty and if two or more indicate empty space thus having same address is not appicable since then atleast 1 byte is given 
    cout<<sizeof(c1);  // 5 but it comes 8 as per the given reason of padding
    cout<<sizeof(b1);
    cout<<sizeof(b2);
    cout<<sizeof(f1);
    cout<<sizeof(d1);
    cout<<sizeof(f2);
    cout<<sizeof(a1);

    return 0;


}