#include<iostream>

// in this file we will we covering the 5 ways of data initialization 
/*  default constructor
    parameterised constructor
    inline constructor
    copy constructor
*/
using namespace std;

class customer
{
    public:
    string name="akshay";
    int account=3435345;
    int balance=543;

    int *roi;   // at later point ask for memory if not available it will return based on memory 
    
    customer()//default constructor
    { cout<< "processing the default constructor";}

    //constructor overloading

    // customer(string a,int b, int c)
    // { name = a;account = b; balance = c;}    // parameterised


    // customer(string name,int account, int balance)
    // { this->name=name; this->account=account; this->balance=balance;}
    customer(string a,int b)
    {name = a; account = b;}

     // inline constructor
       //we have to write the inline keyword
    inline customer(string a,int b,int c): name(a),account(b),balance(c){}

    customer(customer &b)
    {
        name = b.name;
        account = b.account;
        balance = b.balance;

    }

    void display()
    {
        cout<<name<<" "<<account<<" "<<balance<<endl;}

        //  :: scope resolution (where does it belong)

};

// to access inline outside of the class we make use of the (::)

// inline Customer::Customer(string a, int b, int c)
//     : name(a), account(b), balance(c)
// {
// }


// if any constructor is already present it doesnot generate a cosntructor itself (because it consider that as a wrong data entry and that should be avoided);



// concept of copy constructor it is also called by default (but if already created it wonot call by itself)

int main()
{
    customer a;
    customer b("rohit",4545433,345);  // kind of file open 
    customer c("mohit",453443);
    a.display();
    b.display();

    customer d(b);   // if not created itself generate    
   /*  customer(customer(b) { name= b.name; account = b.account; balance = b.balance})*/   // thery will and call and call infinitely so to avoid thsi we will use refernce because after calling we need ensure b also point to the object prior or else object
    

   //its a way of intializing a object and it works 
    customer t;
    t=b;
    t.display();

    return 0;
}


// inreal life we ask for file to be open access and prior tell what i fresource is available