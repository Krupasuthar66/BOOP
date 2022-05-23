// Create a class Point having X and Y Axis with getter and setter functions in C++

#include <iostream>
using namespace std;

// claas declaration
class point
{
	private:
		int X, Y;
	
	public:
		//defualt constructor 
		point () {X=0; Y=0;}
		
		//setter function
		void setPoint(int a, int b)
		{
			X = a;
			Y = b;
		}
		//getter functions
		int getX(void) 
		{
			return X;
		} 
		int getY(void)
		{
			return Y;
		}

};

//Main function
int main ()
{
	//object 
	point p1, p2;
	//set points
	p1.setPoint(5, 10);
	p2.setPoint(50,100);
	//get points 
	cout<<"p1: "<<p1.getX () <<" , "<<p1.getY () <<endl;
	cout<<"p1: "<<p2.getX () <<" , "<<p2.getY () <<endl;
	return 0;
}

// OUTPUT //
p1: 5 , 10
p1: 50 , 100
