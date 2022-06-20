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
  
#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class area
{
        float ar;
        public:
                area(float r)
                {
                        ar=3.14*r*r;
                }
                area(float l, float b)
                {
                        ar=l*b;
                }
                area(float a, float b, float c)
                {
                        float s;
                        s=(a+b+c)/2;
                        ar=s*(s-a)*(s-b)*(s-c);
                        ar=pow(ar,0.5);
                }
                void display()
                {
                        cout<<"\n Area : "<<ar;
                }
};
int main()
{
        int ch;
        float x, y, z;
        do
        {
                cout<<"\n\n 1. Area of Circle";
                cout<<"\n 2. Area of Rectangle";
                cout<<"\n 3. Area of Triangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;

                switch(ch)
                {
                        case 1 :
                        {
                                cout<<"\n Enter Radius of the Circle : ";
                                cin>>x;
                                area a1(x);  //Class area, object is created : a1
                                a1.display();
                        }
                        break;

                        case 2 :
                        {
                                cout<<"\n Enter Length and Breadth of the Rectangle : ";
                                cin>>x>>y;
                                area a2(x,y);
                                a2.display();
                        }
                        break;

                        case 3 :
                        {
                                cout<<"\n Enter Sides of the Triangle : ";
                                cin>>x>>y>>z;
                                area a3(x,y,z);
                                a3.display();
                        }
                        break;

                        case 4 :
                                exit(0);

                        default :
                                cout<<"\n\n Invalid Choice ...";
                }
        } while(ch!=4);
        return 0;
}

