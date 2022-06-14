//  7.1   Array of Objects 
#include<iostream>
using namespace std;
class books 
{
  char title[30];
  float price;
  public:
     void getdata();
     void putdata();
};
void books :: getdata() 
{
   cout<<"Title:";
   cin>>title;
   cout<<"Price:”;
   cin>>price;
}
void books :: putdata() 
{
   cout<<"Title:"<<title<<endl;
   cout<<"Price:"<<price<<endl;
}
int main() 
{
  books book[3];
  for(int i=0;i<3;i++)
  {
    cout<<"Enter details o£ book "<<(i+1)<<endl;
    book[i].getdata();
  }
   for(int i=0;i<3;i++)
   {
     cout<<"\nBook "<<(i+1)<<endl;
     book[i].putdata();
   } 
    return 0;
}
 
// The output of the program is

Enter details of book 1

Title: c++

Price: 325

Enter details of book 2

Title: DBMS

Price:. 455

Enter details of book 3

Title: Java

Price: 255

Book 1

Title: c++

Price: 325

Book 2

Title: DBMS

Price: 455

Book 3

Title: Java

Price: 255
  
  
// 7.2  Static member function
  
#include <iostream>

using namespace std;

class Demo
{
	private:	
		//static data members
		static int X;
		static int Y;

	public:
	//static member function
	static void  Print()
	{
		cout <<"Value of X: " << X << endl;
		cout <<"Value of Y: " << Y << endl;
	}
};

//static data members initializations
int Demo :: X =10;
int Demo :: Y =20;


int main()
{
	Demo OB;
	//accessing class name with object name
	cout<<"Printing through object name:"<<endl;
	OB.Print();
	
	//accessing class name with class name
	cout<<"Printing through class name:"<<endl;
	Demo::Print();
	
	return 0;
}
 //  OUTPUT

Printing through object name:
Value of X: 10
Value of Y: 20
Printing through class name:
Value of X: 10
Value of Y: 20
