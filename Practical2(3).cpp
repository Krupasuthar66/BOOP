// 1. Arithmetic operator//

#include <iostream>
using namespace std;
int main() {
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    return 0;
}

// OUTPUT //

a + b = 9
a - b = 5
a * b = 14
a / b = 3
a % b = 1
  
 //2.  Working of increment and decrement operators //

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;


    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;
    cout << "result_b = " << result_b << endl;

    return 0;
}

// OUTPUT //

result_a = 11
result_b = 99
  
//3.  Assignmnet operators //
  
#include <iostream>
using namespace std;
int main() 
{
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

    return 0;
}

// OUTPUT //
a = 2
b = 7

After a += b;
a = 9
  
// 4. Relational Operators //
  
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}

// OUTPUT //

3 == 5 is 0
3 != 5 is 1
3 > 5 is 0
3 < 5 is 1
3 >= 5 is 0
3 <= 5 is 1
  
// 5. Logical operators //
  
#include <iostream>
using namespace std;
int main() 
{
    bool result;

    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}

// OUTPUT //

(3 != 5) && (3 < 5) is 1
(3 == 5) && (3 < 5) is 0
(3 == 5) && (3 > 5) is 0
(3 != 5) || (3 < 5) is 1
(3 != 5) || (3 > 5) is 1
(3 == 5) || (3 > 5) is 0
!(5 == 2) is 1
!(5 == 5) is 0
  
  /// 6.  Bitwise operators  /////
  
 // Bitwise AND  //
  
#include <iostream>
using namespace std;
int main() 
{
    // declare variables
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    return 0;
}

// OUTPUT //

a = 12
b = 25
a & b = 8
  
 // Bitwise OR  //
  
#include <iostream>
using namespace std;
int main() 
{
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a | b = " << (a | b) << endl;

    return 0;
}
  // OUTPUT //

a = 12
b = 25
a | b = 29
 
  // Bitwise XOR  //
#include <iostream>
using namespace std;
int main()
{
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    return 0;
}
 // OUTPUT //
a = 12
b = 25
a ^ b = 21

  // Bitwise Complement //
  
#include <iostream>
using namespace std;
int main()
{
    int num1 = 35;
    int num2 = -150;
    cout << "~(" << num1 << ") = " << (~num1) << endl;
    cout << "~(" << num2 << ") = " << (~num2) << endl;

    return 0;
}
// OUTPUT //

~(35) = -36
~(-150) = 149
  
  // Shift Operators //
 #include <iostream>
using namespace std;
int main()
{
    // declaring two integer variables
    int num = 212, i;

    // Shift Right Operation
    cout << "Shift Right:" << endl;

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }

    // Shift Left Operation
    cout << "\nShift Left:" << endl;

    // Using for loop for shifting num left from 0 bit to 3 bits
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }

    return 0;
}


// OUTPUT //
Shift Right:
212 >> 0 = 212
212 >> 1 = 106
212 >> 2 = 53
212 >> 3 = 26

Shift Left:
212 << 0 = 212
212 << 1 = 424
212 << 2 = 848
212 << 3 = 1696
  
Operator	                  Description	                                                                     Example
sizeof	              returns the size of data type	                                                        sizeof(int); // 4
?: 	                  returns value based on the condition	                                    string result = (5 > 0) ? "even" : "odd"; // "even"
&               	represents memory address of the operand	                                            &num; // address of num
.	               accesses members of struct variables or class objects	                                s1.marks = 92;
->	             used with pointers to access the class or struct variables	                               ptr->marks = 92;
<<	                    prints the output value	                                                               cout << 5;
>>	                    gets the input value	                                                               cin >> num;
