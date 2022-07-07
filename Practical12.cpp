//  Develop programs using Constructors in base and derive classes.

// 12.1  constructors and destructors in multiple inheritance without arguments.

#include <iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
       cout<<"constructor called for base1"<<endl;
    }
    ~base1()
    {
        cout<<"destructor called for base1"<<endl;
    }
};
class base2
{
    public:
    base2()
    {
       cout<<"constructor called for base2"<<endl;
    }
    ~base2()
    {
        cout<<"destructor called for base2"<<endl;
    }
};
class derive1 : public base1, public base2
{
    public:
    derive1()
    {
       cout<<"constructor called for derive1"<<endl;
    }
    ~derive1()
    {
        cout<<"destructor called for derive1"<<endl;
    }
    
};
int main()
{
    derive1 d1;
    cout<<"destructors are:"<<endl;
    return 0;
}


/// OUTPUT

constructor called for base1
constructor called for base2
constructor called for derive1
destructors are:
destructor called for derive1
destructor called for base2
destructor called for base1

// 12.2 Constructors in multiple inheritance with arguments

#include <iostream>

using namespace std;
class base1
{
    public:
    base1(int x, int y)
    {
       cout<<"sum values passed to base1:"<<x+y<<endl;
    }
};
class base2
{
    public:
    base2(char str[])
    {
       cout<<"string passed to base2:"<<str<<endl;
    }
};
class derive1 : public base1, public base2
{
    public:
    derive1(int x, int y, char str[], double d) : base1(x,y),base2(str)
    {
       cout<<"values passed to derive1:"<<d<<endl;
    }
};
int main()
{
    derive1 obj(2,6,"Welcome to Apollo",2.7);
    return 0;
}

//  OUTPUT

sum values passed to base1:8
string passed to base2:Welcome to Apollo
values passed to derive1:2.7
  
//  12.3  Constructors and Destructors in Single Inheritance
  
#include <iostream>
 
using namespace std;
 
class A
 
{
  public:
    A()
 
    {
 
         cout<<" Constructor of the base class A\n ";
    }
    ~A()
    {
        cout<<" Destructor of the base class A\n ";
 
    }
};
class B : public A
{
 public:
    B()
    {
        cout<<" Constructor of the derive class B\n ";
    }
 
    ~B()
    {
        cout<<" Destructor of the derive class B\n ";
    }
};
int main()
{
  B obj;
  return 0;
}


//  OUTPUT

Constructor of the base class A
Constructor of the derive class B
Destructor of the derive class B
Destructor of the base class A
  
//  12.4  Constructor in Single Inheritance With Arguments
  
#include <iostream>
using namespace std;
class A
{
    private:
        int x,y;
    public:
    A(int m, int n)
    {
        x=m;
        y=n;
    }
    void print()
    {
         cout<<" value of x = "<<x<<endl;
         cout<<" value of y = "<<y<<endl;
    }
};
class B : public A
{
    private:
        float i, j;
    public:
    B(int m, int n, float a, float b) : A(m, n)
    {
        i = a;
        j= b;
    }
    void show(void)
    {
        cout<<" value of i = "<<i<<endl;
        cout<<" Value of j = "<<j<<endl;
    }
};
int main()
{
  B obj(5,7,29.4,56.3);
  obj.print();
  obj.show();
}


//  OUTPUT

value of x = 5
value of y = 7
value of i = 29.4
Value of j = 56.3


