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
    

    
//  Develop Program using Multiple Inheritance.
    
#include<iostream>
using namespace std;

class student 
{
protected:
    int rno, m1, m2;
public:

    void get() 
    {
        cout << "Enter the Roll no :";
        cin>>rno;
        cout << "Enter the two marks   :";
        cin >>m1>>m2;
    }
};

class sports 
{
protected:
    int sm; // sm = Sports mark
public:

    void getsm() 
    {
        cout << "\nEnter the sports mark :";
        cin>>sm;

    }
};

class statement : public student, public sports
{
    int tot, avg;
public:

    void display() 
    {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << "\n\n\tRoll No    : " << rno << "\n\tTotal      : " << tot;
        cout << "\n\tAverage    : " << avg;
    }
};

int main()
{
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}


//  OUTPUT

Enter the Roll no :5
Enter the two marks   :45 67

Enter the sports mark :67


        Roll No    : 5
        Total      : 179
        Average    : 59
            
            
//  Develop program using Multilevel Inheritance for payroll system.
            
#include<iostream>
using namespace std;

class Employee 
{
    int eno;
    char name[20], des[20];	
    // Private members cannot call from outside class.
public:
    void getEmpDetails() 
    {
        cout << "\nEnter the Employee number:";
        cin>>eno;
        cout << "Enter the Employee name:";
        cin>>name;
        cout << "Enter the Employee designation:";
        cin>>des;
    }
    
    void employee_display() 
    {
    	cout <<"\nEmployee number:"<<eno;
		cout <<"\nEmployee name:"<<name;
		cout <<"\nEmployee designation:"<<des;
    }
};

class Salary : private Employee 
{
	//Private Base Class, We cannot access outside the dervied Class
    float bp, hra, da, pf, np;
public:

    void getPayDetails() 
    {
    	getEmpDetails();
        cout << "Enter the Basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Dearness Allowance :";
        cin>>da;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
        calculate();
    }

    void calculate()
    {
        np = bp + hra + da - pf;
    }

    void salary_display() 
    {
    	employee_display();
    	cout <<"\nEmployee Basic pay:"<<bp;
		cout <<"\nEmployee Humen Resource Allowance:"<<hra;
		cout <<"\nEmployee Dearness Allowance:"<<da;
		cout <<"\nEmployee Profitablity Fund:"<<pf;
		cout <<"\nEmployee Net Pay:"<<np;
    }
};

class BankCredit : private Salary
{
	char bank[20], ifsc_code[20];	
	int account_number;
	public:
	void getBankDetails() 
	{
    	getPayDetails();
        cout << "Enter the Bank Name:";
        cin>>bank;
        cout << "Enter the IFSC:";
        cin>>ifsc_code;
        cout << "Enter the Account Number :";
        cin>>account_number;
    }
    
    void display() 
    {
    	salary_display();
    	cout <<"\nEmployee Bank Name:"<<bank;
		cout <<"\nEmployee IFSC:"<<ifsc_code;
		cout <<"\nEmployee Account Number:"<<account_number<<endl;
    }
};

int main() 
{
    int i, n;
    char ch;
    BankCredit s[10];
    cout << "Simple Multi Level Inheritance Example Program : Payroll System \n";
    cout << "Enter the number of employee:";
    cin>>n;
    for (i = 0; i < n; i++)
    {
    	cout << "\nEmployee Details # "<<(i+1)<<" : ";
        s[i].getBankDetails();
    }

    for (i = 0; i < n; i++) 
    {
        s[i].display();
    }
    return 0;
}

// OUTPUT

Enter the number of employee:2

Employee Details # 1 :
Enter the Employee number:101
Enter the Employee name:MASTE
Enter the Employee designation:Er
Enter the Basic pay:26000
Enter the Humen Resource Allowance:1300
Enter the Dearness Allowance :1200
Enter the Profitablity Fund:500
Enter the Bank Name:SBI
Enter the IFSC:ISFC001
Enter the Account Number :10001

Employee Details # 2 :
Enter the Employee number:102
Enter the Employee name:FORGE
Enter the Employee designation:Dr
Enter the Basic pay:32000
Enter the Humen Resource Allowance:2000
Enter the Dearness Allowance :300
Enter the Profitablity Fund:500
Enter the Bank Name:CITI
Enter the IFSC:ISFC0004
Enter the Account Number :20001

Employee number:101
Employee name:MASTE
Employee designation:Er
Employee Basic pay:26000
Employee Humen Resource Allowance:1300
Employee Dearness Allowance:1200
Employee Profitablity Fund:500
Employee Net Pay:28000
Employee Bank Name:SBI
Employee IFSC:ISFC001
Employee Account Number:10001

Employee number:102
Employee name:FORGE
Employee designation:Dr
Employee Basic pay:32000
Employee Humen Resource Allowance:2000
Employee Dearness Allowance:300
Employee Profitablity Fund:500
Employee Net Pay:33800
Employee Bank Name:CITI
Employee IFSC:ISFC0004
Employee Account Number:20001
