// 1. By changing the Number of Arguments

#include <iostream>
 
using namespace std;
 
int add(int a, int b)
{
    cout << a+b <<endl;
    return 0;
}
 
int add(int a, int b, int c)
{
    cout << a+b+c <<endl;
    return 0;
}
 
int main()
{
     
    add(20, 40);  
 
    add(40, 20, 30);  
}

// OUTPUT //

60
90
  
//  2. By having different types of Arguments
#include <iostream>
using namespace std;
int add(int x, int y) // first definition
{
    cout<< x+y << endl;
 
    return 0;
}
 
float add(float a, float b)
{
    cout << a+b << endl;
    return 0;
}
 
double add(double x, double y)
{
    cout << x+y << endl;
    return 0;
}
 
int main()
{
    add(20, 40);  
 
    add(23.45f, 34.5f);
 
    add(40.24, 20.433);  
}

// OUTPUT //

60
57.95
60.673
