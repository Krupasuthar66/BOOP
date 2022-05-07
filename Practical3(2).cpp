// C++ Simple MAnipulators //


// 1. endl  //
#include <iostream>
using namespace std;
int main()
{
 cout<<"USING '\\n' ...\n";
 cout<<"Line 1 \nLine 2 \nLine 3 \n";
 cout<<"USING endl ..."<< endl;
 cout<< "Line 1" << endl << "Line 2" << endl << "Line 3" << endl;
 return 0;
} 

// OUTPUT //

USING '\n' ...
Line 1        
Line 2        
Line 3        
USING endl ... 
Line 1        
Line 2
Line 3
  
// 2. setw() and setfill()  //
  
#include <iostream>
#include <iomanip>
 using namespace std;
 int main()
 {
 cout<<"USING setw() ..............\n";
 cout<< setw(10) <<11<<"\n";
 cout<< setw(10) <<2222<<"\n";
 cout<< setw(10) <<33333<<"\n";
 cout<< setw(10) <<4<<"\n";
 cout<<"USING setw() & setfill() [type- I]...\n";
 cout<< setfill('0');
 cout<< setw(10) <<11<<"\n";
 cout<< setw(10) <<2222<<"\n";
 cout<< setw(10) <<33333<<"\n";
 cout<< setw(10) <<4<<"\n";
 cout<<"USING setw() & setfill() [type-II]...\n";
 cout<< setfill('-')<< setw(10) <<11<<"\n";
 cout<< setfill('*')<< setw(10) <<2222<<"\n";
 cout<< setfill('@')<< setw(10) <<33333<<"\n";
 cout<< setfill('#')<< setw(10) <<4<<"\n";
 return 0;
 }

// OUTPUT //

USING setw() ..............
        11
      2222
     33333
         4
USING setw() & setfill() [type- I]...
0000000011
0000002222
0000033333
0000000004
USING setw() & setfill() [type-II]...
--------11
******2222
@@@@@33333
#########4

// 3. setprecision //

#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
 const float tenth = 0.1;
 const float one = 1.0;
 const float big = 1234567890.0;

 cout << "A. " << tenth << ", " << one << ", " << big << endl;
 cout << "B. " << fixed << tenth << ", " << one << ", " << big << endl;
 cout << "C. " << scientific << tenth << ", " << one << ", " << big << endl;
 cout << "D. " << fixed << setprecision(3) << tenth << ", " << one << ", " << big << endl;
 cout << "E. " << setprecision(20) << tenth << endl;
 return 0;
}

// OUTPUT //

A. 0.1, 1, 1.23457e+009
B. 0.100000, 1.000000, 1234567936.000000      
C. 1.000000e-001, 1.000000e+000, 1.234568e+009
D. 0.100, 1.000, 1234567936.000
E. 0.10000000149011611938
