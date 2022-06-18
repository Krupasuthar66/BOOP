// 10.1 Write a program to find area of circle using Object oriented Programming.The value of the radius must be accepted from the user in the constructor and the class circle must have two inline functions namely: (a) compute() for calculating the area (b) display() for displaying the result
#include <iostream>
using namespace std;
class circle
{
    float r,a;
    public:
    circle()
    {
        cout<<"Enter the value of radius:";
        cin>>r;
    }
    void compute();
    void display();
};
inline void circle :: compute()
{
    a=3.12*r*r;
}
inline void circle :: display()
{
    cout<<"Area="<<a;
}
int main()
{
    circle c;
    c.compute();
    c.display();
    return 0;
}

// OUTPUT

Enter the value of radius:4
Area=49.92
  
// 10.2 Write a program to find area of circle using Object oriented Programming.The value of the radius must be accepted from the user in the main program and the and passed to the parameterized constructor and the class circle must have two inline functions namely: (a) compute() for calculating the area (b) display() for displaying the result
  
 #include <iostream>
using namespace std;
class circle
{
    float r,a;
    public:
    circle(float x)
    {
        r=x;
    }
    void compute();
    void display();
};
inline void circle :: compute()
{
    a=3.12*r*r;
}
inline void circle :: display()
{
    cout<<"Area="<<a;
}
int main()
{
    float p;
    cout<<"Enter the radius of the circle:";
    cin>>p;
    circle c(p);
    c.compute();
    c.display();
    return 0;
}

// OUTPUT

Enter the value of radius:4
Area=49.92
  
// 10.3 Write a program to calucalte the area of triangle, rectangle and circle using constructor overloading. The program should be menu-driven.
  
 
