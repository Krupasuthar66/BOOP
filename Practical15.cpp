//  15.1 C++ Program to Copy One File into Another File.

// C++ Program to demonstrate copying the content of a .txt file
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	string line;
	// For writing text file
	// Creating ofstream & ifstream class object
	ifstream ini_file
  {
		"original.txt"
	}; // This is the original file
	ofstream out_file{ "copy.txt" };
	if (ini_file && out_file) 
  {
    	while (getline(ini_file, line)) 
      {
			out_file << line << "\n";
		  }
		  cout << "Copy Finished \n";
	}
	else 
  {
		// Something went wrong
		printf("Cannot read File");
	}
	// Closing file
	ini_file.close();
	out_file.close();
	return 0;
}


//  OUTPUT

Original File – original.txt:I tried so hard and got so far But in the end it doesn't even matter I had to fall to lose it all But in the end it doesn't even matter

Copy program running: PS C:\Users\KRUPA SUTHAR\HelloWorld> ./F3
Copy Finished 
PS C:\Users\KRUPA SUTHAR\HelloWorld> 

Copy File – copy.txt:I tried so hard and got so far But in the end it doesn't even matter I had to fall to lose it all But in the end it doesn't even matter

After Deleting original.txt file:
PS C:\Users\KRUPA SUTHAR\HelloWorld> ./F3
Cannot read File


// 15.2  Write a program that opens two text files for reading data. It creates a third file that contains the text of first file and then that of second file 
// (text of second file to be appended after text of the first file, to produce the third file). 
  
#include<iostream>
#include<fstream>
using namespace std;
int main () 
{
  fstream file1,file2,file3;
file1.open("one.txt",ios::in);
file2.open("two.txt",ios::in);
file3.open("Merge.txt",ios::app);
char ch1,ch2;
while(!file1.eof())
{
file1.get(ch1); 
cout<<ch1<<endl;
file3.put(ch1);
}
file1.close();
while(!file2.eof())
{
file2.get(ch2); 
cout<<ch2<<endl;
file3.put(ch2);
}
file2.close(); 
file3.close();
return 0;
}

//  OUTPUT

Before running Program 

one.txt:  WELCOME TO 
two.txt:   APOLLO INSTITUTE OF ENGINEERING AND TECHNOLOGY............

After Running program

PS C:\Users\KRUPA SUTHAR\HelloWorld> ./F2
W
E
L
C
O
M
E

T
O



A
P
O
L
L
O

I
N
S
T
I
T
U
T
E

O
F

E
N
G
I
N
E
E
R
I
N
G

A
N
D

T
E
C
H
N
O
L
O
G
Y
.
.
.
.
.
.
.
.
.
.
.
.
.
PS C:\Users\KRUPA SUTHAR\HelloWorld>

Merge.txt: WELCOME TO   APOLLO INSTITUTE OF ENGINEERING AND TECHNOLOGY.............
