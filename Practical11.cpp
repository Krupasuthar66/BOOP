/// Develop program using Simple Inheritance.

#include<iostream>
using namespace std;
class emp 
{
public:
    int eno;
    char name[20], des[20];

    void get() 
    {
        cout << "Enter the employee number:";
        cin>>eno;
        cout << "Enter the employee name:";
        cin>>name;
        cout << "Enter the designation:";
        cin>>des;
    }
};

class salary : public emp
{
    float bp, hra, da, pf, np;
public:

    void get1() 
    {
        cout << "Enter the basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
    }

    void calculate()
    {
        np = bp + hra + da - pf;
    }

    void display() 
    {
        cout << eno << "\t" << name << "\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
    }
};

int main() 
{
    int i, n;
    char ch;
    salary s[10];
    cout << "Enter the number of employee:";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout << "\ne_no \t e_name\t des \t bp \t hra \t da \t pf \t np \n";
    for (i = 0; i < n; i++) 
    {
        s[i].display();
    }
    return 0;
}

//   OUTPUT

Enter the number of employee:2
Enter the employee number:1
Enter the employee name:Krupa
Enter the designation:Professor
Enter the basic pay:35000
Enter the Humen Resource Allowance:2500
Enter the Dearness Allowance :1200
Enter the Profitablity Fund:1000
Enter the employee number:2
Enter the employee name:Krishna
Enter the designation:Professor
Enter the basic pay:33000
Enter the Humen Resource Allowance:1400
Enter the Dearness Allowance :1200
Enter the Profitablity Fund:1000

e_no     e_name  des     bp      hra     da      pf      np 
1       Krupa   Professor       35000   2500    1200    1000    37700
2       Krishna Professor       33000   1400    1200    1000    34600
