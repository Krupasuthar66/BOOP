// 9.1  Simple Friend Function

#include<iostream>
using namespace std;
class sample
{
int a;
int b;
public:
void setvalue()
{
a=25;
b=40;
}
friend float mean(sample s);
};
float mean(sample s)
{
return float(s.a+s.b)/2.0;
}
int main()
{
sample X;
X.setvalue();
cout<<"Mean value= "<<mean(X);
return 0;
}


// OUTPUT

Mean value= 32.5
  
  
// 9.2 program to find max of two numbers using friend function for two different classes
 
  #include<iostream>
using namespace std;
class sample2;
class sample1
{
int x;
public:
sample1(int a);
friend void max(sample1 s1,sample2 s2);
};
sample1::sample1(int a)
{
x=a;
}
class sample2
{
int y;
public:
sample2(int b);
friend void max(sample1 s1,sample2 s2);
};
sample2::sample2(int b)
{
y=b;
}
void max(sample1 s1,sample2 s2)
{
if(s1.x>s2.y)
cout<<"Data member in Object of class sample1 is larger"<<endl;
else
cout<<"Data member in Object of class sample2 is larger"<<endl;
}
int main()
{
sample1 obj1(3);
sample2 obj2(5);
max(obj1,obj2);
return 0;
}

// OUTPUT

Data member in Object of class sample2 is larger

// 9.3 friend class
  
#include <iostream>
using namespace std;
class Demo;
class Test
{
  private: 
  int a,b;
  friend class Demo;
  public:
  Test()
  {
      a=1;
      b=2;
  }
};
class Demo
{
  public: 
  void putdata(Test x)
  {
      cout<<"a is"<<x.a<<endl;
      cout<<"b is"<<x.b<<endl;
  }
};
using namespace std;
int main() 
{
    Test t;
    Demo d;
    d.putdata(t);
    return 0;
}
// OUTPUT
a is1
b is2
