#include <iostream>

using namespace std;

class employee
{
	int   emp_number;
	char  emp_name[20];
	float emp_basic;
	float emp_da;
	float emp_it;
	float emp_net_sal;
	public:
		void get_emp_details();
		float find_net_salary(float basic, float da, float it);
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee number: ";
	cin>>emp_number;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee basic: ";
	cin>>emp_basic;
	cout<<"\nEnter employee DA: ";
	cin>>emp_da;
	cout<<"\nEnter employee IT: ";
	cin>>emp_it;
}

float employee :: find_net_salary(float basic, float da, float it)
{
    return (basic+da)-it;
}

void employee :: show_emp_details()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee number    :  "<<emp_number;
	cout<<"\nBasic salary       :  "<<emp_basic;
	cout<<"\nEmployee DA        :  "<<emp_da;
	cout<<"\nIncome Tax         :  "<<emp_it;
	cout<<"\nNet Salary         :  "<<find_net_salary(emp_basic, emp_da, emp_it);
	cout<<"\n-------------------------------\n\n";
}

int main()
{
    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0;
}

// OUTPUT  //

Enter employee number: 112
Enter employee name: Krishna
Enter employee basic: 15000
Enter employee DA: 500
Enter employee IT: 300
**** Details of  Employee ****
Employee Name      :  Krishna
Employee number    :  112
Basic salary       :  15000
Employee DA        :  500
Income Tax         :  300
Net Salary         :  15200
-------------------------------
