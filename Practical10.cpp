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
    a=3.14*r*r;
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
Area=50.24
  
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
    a=3.14*r*r;
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

Enter the value of radius:5
Area=78.5
  
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

//   OUTPUT

1. Area of Circle
2. Area of Rectangle
3. Area of Triangle
4. Exit

Enter Your Choice : 1
Enter Radius of the Circle : 5
Area : 78.5

 1. Area of Circle
 2. Area of Rectangle
 3. Area of Triangle
 4. Exit

 Enter Your Choice : 2
 Enter Length and Breadth of the Rectangle : 5 6
 Area : 30

 1. Area of Circle
 2. Area of Rectangle
 3. Area of Triangle
 4. Exit

 Enter Your Choice : 3
 Enter Sides of the Triangle : 2 3 3
 Area : 2.82843

 1. Area of Circle
 2. Area of Rectangle
 3. Area of Triangle
 4. Exit

 Enter Your Choice : 4

  //  10.4  Write a program to demonstrate use of Copy Constructor.
     
 #include <iostream>

using namespace std;
class code
{
  int id;
  public:
  code()
  {
      
  }
  code(int a)
  {
      id=a;
  }
  code(code &x)
  {
      id=x.id;
  }
  void display()
  {
      cout<<id;
  }
};
int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;
    D=A;
    cout<<"\n id of A :"; 
    A.display( );
    cout<<"\n id of B :"; 
    B.display( );
    cout<<" \n id of C:"; 
    C.display( );
    cout<<" \n id of D:"; 
    D.display( );
    
    return 0;
}

//   OUTPUT

id of A :100
id of B :100 
id of C:100 
id of D:100
    
////   10.5  Write a program to demonstrate use of Destructor.
    
#include <iostream>

using namespace std;
class apollo
{
  public:
   static int count;
  apollo()
  {
      count++;
      cout<<"\n no of object created "<<count<<endl;
  }
  ~apollo()
  {
      cout<<"\n no of object destroyed "<<count<<endl;
      count--;
  }
};
int apollo :: count=0;
int main()
{
    cout<<"\n \n Main: \n ";
    apollo A1,A2,A3,A4;
    {
    cout<<" \n enter in other block:\n";
    apollo A5;
    apollo A6;
    apollo A7;
    apollo A8;
    }
    cout<<" \n re-enter Main: \n";
    return 0;
}

//   OUTPUT

Main: 
 
no of object created 1
no of object created 2

 no of object created 3

 no of object created 4
 
 enter in other block:

 no of object created 5

 no of object created 6

 no of object created 7

 no of object created 8

 no of object destroyed 8

 no of object destroyed 7

 no of object destroyed 6

 no of object destroyed 5
 
 re-enter Main: 

 no of object destroyed 4

 no of object destroyed 3

 no of object destroyed 2

 no of object destroyed 1
     
 /// 10.6  Array of objects initialization with constructors in C++.
     
#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string name;
    int age;

public:
    // default constructor
    person()
    {
        name = "N/A";
        age = 0;
    }

    // parameterized constructor with default argument
    person(string name, int age = 18)
    {
        this->name = name;
        this->age = age;
    }

    // function to display values
    void display()
    {
        cout << name << "\t" << age << endl;
    }
};

int main()
{
    //array of class objects declaration
    person per[4] = { person("ABC"), person("PQR"), person("XYZ", 30), person() };

    per[0].display();
    per[1].display();
    per[2].display();
    per[3].display();

    return 0;
}

//  OUTPUT

ABC	18
PQR	18
XYZ	30
N/A	0


     
    


    
