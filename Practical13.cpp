//  Develop a program to show use of this pointer.

#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rno;
    char name[20];
    double per;
    public:
    student(int r,char tname[],double p)
    {
        rno=r;
        strcpy(name,tname);
        per=p;
    }
    student topper(student s2)
    {
        if(per>s2.per)
            return *this;
        else
            return s2;
    }
    void putdata()
    {
        cout<<"\n Roll No is:"<<rno;
        cout<<"\n Name is:"<<name;
        cout<<"\n Percentage is:"<<per;
    }
};
int main()
{
    student s1(1, "Sameer", 90.80);
    student s2(2, "Mona", 92.50);
    student s3 = s1.topper(s2);
    s3.putdata();
    return 0;
}


///    OUTPUT


 Roll No is:2
 Name is:Mona
 Percentage is:92.5
