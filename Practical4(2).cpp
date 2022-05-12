#include <iostream>

using namespace std;
int fn_multipy(int x, int y = 1);

int main()
{
   int a = 200, b = 100;
   cout << "Simple Default Argument Function Example Program\n";

   cout << "\nWorks for a and b    :" << fn_multipy(a, b);
   cout << "\nWorks for a          :" << fn_multipy(a);
    return 0;
}

// Default Argument Function

int fn_multipy(int x, int y) 
{
   return (x * y);

}

//  OUTPUT  //

Simple Default Argument Function Example Program

Works for a and b    :20000
Works for a          :200
