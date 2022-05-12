#include <iostream> 
using namespace std; 
inline int cube(int s) 
{ 
return s*s*s; 
} 
inline int inc(int a) 
{ 
return ++a; 
}
int main() 
{ 
int a = 11;
cout << "The cube of 3 is: " << cube(3) << "n"; 
cout << "Incrementing a " << inc(a) << "n";
return 0; 
}  

//  OUTPUT //
The cube of 3 is: 27
Incrementing a 12
