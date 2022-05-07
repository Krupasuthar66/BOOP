// Find Factorial //

#include <iostream>  
using namespace std;  
int main()  
{  
    int i,fact=1,number;    
    cout<<"Enter any Number: ";    
    cin>>number;    
    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    
    cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
    return 0;  
}  


// OUTPUT  //

Enter any Number: 5  
Factorial of 5 is: 120
