// 8.1 Pass object as argument
#include<iostream>
using namespace std;
class Complex 
{ 
 private: 
   int real,imag; 
 public: 
   void readData() 
   { 
     cout<<"Enter real and imaginary number:"; 
     cin>>real>> imag; 
   } 
   void addComplexNumbers(Complex comp1, Complex comp2) 
   { 
     real=comp1.real+comp2.real; 
     imag=comp1.imag+comp2.imag; 
   } 
   void displaySum() 
   { 
     cout << "Sum = " << real<< "+" << imag << "i"; 
   } 
}; 
int main() 
{ 
   Complex c1,c2,c3; 
   c1.readData(); 
   c2.readData(); 
   c3.addComplexNumbers(c1, c2); 
   c3.displaySum(); 
   return 0;
} 

// Output

Enter real and imaginary number:
5
3
Enter real and imaginary number:
5
3
Sum = 10+6i

//  8.2  Retuning Object 
  
 #include<iostream>
using namespace std;
class Complex 
{ 
 private: 
   int real,imag; 
 public: 
   void readData() 
   { 
     cout<<"Enter real and imaginary number:"; 
     cin>>real>> imag; 
   } 
   Complex addComplexNumbers(Complex comp1, Complex comp2) 
   { 
     Complex temp;     
     temp.real=comp1.real+comp2.real; 
     temp.imag=comp1.imag+comp2.imag; 
     return temp;
   } 
   void displaySum() 
   { 
     cout << "Sum = " << real<< "+" << imag << "i"; 
   } 
}; 
int main() 
{ 
   Complex c1,c2,c3,ans; 
   c1.readData(); 
   c2.readData(); 
   ans = c3.addComplexNumbers(c1, c2); 
   ans.displaySum(); 
} 


// OUTPUT

Enter real and imaginary number:
6
3
Enter real and imaginary number:
6
3
Sum = 12+6i
