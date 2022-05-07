// CallbyValue, CallbyReference //

#include <iostream>
using namespace std;
void swapThemByVal(int, int);
void swapThemByRef(int &, int &);
void swapThemByptr(int *, int *);
int main() 
{
      int i = 10, j = 20;
      cout << "Before swap, i = " << i << ", j = " << j << endl;

      swapThemByVal(i, j);
      cout << "After swap with PassByValue, i = " << i << ", j = " << j << endl;     // displays 10  20

      cout << "Before swap, i = " << i << ", j = " << j << endl;
      swapThemByRef(i, j);
      cout << "After swap with PassByReference, i = " << i << ", j = " << j << endl;     // displays 20  10

      cout << "Before swap, i = " << i << ", j = " << j << endl;
      swapThemByptr(&i, &j);
      cout << "After swap with PassByPointer, i = " << i << ", j = " << j << endl;   // displays 10  20
      return 0;
}
   void swapThemByVal(int num1, int num2) 
   {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }
   void swapThemByRef(int& num1, int& num2) 
   {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }
   void swapThemByptr(int* num1, int* num2)
   {
       int temp = *num1;
      *num1 = *num2;
      *num2 = temp;
   }

// OUTPUT //

Before swap, i = 10, j = 20
After swap with PassByValue, i = 10, j = 20
Before swap, i = 10, j = 20
After swap with PassByReference, i = 20, j = 10
Before swap, i = 20, j = 10
After swap with PassByPointer, i = 10, j = 20
  
 // Return By Reference-1 //

#include <iostream>
using namespace std;
int& max(int &, int &); 
int main() 
{ 
   int a=5,b=6,ans; 
   ans = max(a,b); 
   cout<<"Maximum="<<ans;
   return 0;
} 
int& max(int &x,int &y) 
{ 
   if (x>y) 
     return x; 
   else 
     return y; 
} 


// OUTPUT //

Maximum= 6
  
// Return By Reference-2 //

#include <iostream>
using namespace std;
int x;
int& setdata(); 
int main() 
{ 
   setdata() = 56; 
   cout<<"Value="<<x;
   return 0;
} 
int& setdata() 
{ 
   return x; 
} 


// OUTPUT //

Value=56
