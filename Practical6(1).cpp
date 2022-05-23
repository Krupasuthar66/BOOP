/*C++ program to create student class, read and print N student's details 
(Example of array of objects).*/
 
#include <iostream>
using namespace std;
#define MAX 10
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
 
//member function definition, outside of the class
void student::getDetails(void)
{
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
 
//member function definition, outside of the class
void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc <<endl;
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,loop;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++)
    {
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
    return 0;
}

// OUTPUT //

    Enter total number of students: 2
    Enter details of student 1:
    Enter name: Mike
    Enter roll number: 101
    Enter total marks outof 500: 456
    Enter details of student 2:
    Enter name: Mock
    Enter roll number: 102
    Enter total marks outof 500: 398

    Details of student 1:
    Student details:
    Name:Mike,Roll Number:101,Total:456,Percentage:91.2
    Details of student 2:
    Student details:
    Name:Mock,Roll Number:102,Total:398,Percentage:79.6
