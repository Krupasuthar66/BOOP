// Enumeration  //

#include <iostream>
using namespace std;
enum colors{red=5, black};
enum suit{heart, diamond=8, spade=3, club};
int main() {
   cout <<"The value of enum color : "<<red<<","<<black;
   cout <<"\nThe default value of enum suit : "<<heart<<","<<diamond<<","<<spade<<","<<club;
   return 0;
}

// OUTPUT //
The value of enum color : 5,6
The default value of enum suit : 0,8,3,4
