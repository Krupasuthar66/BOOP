#include <iostream>  
using namespace std;  
// create an integer Test() function contains an argument num  
int Test (const int num)  
{  
// if we change the value of the const argument, it thwrows an error.  
// num = num + 10;  
cout << " The value of num: " << num << endl;  
return 0;  
}  
int main ()  
{  
// call function  
Test(5);  
}  

// OUTPUT //

The value of num: 5
