/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;

int main()
{
	double salary , netsalary;
	int etype , otHours , otRate;
	
	cout<<"Enter Employee Type : ";
	cin>> etype;
	
	cout << "Enter Salary : "; 
	cin>> salary;
	
	cout << "Enter OT hours : ";
	cin >> otHours;
	
	switch(etype)
	{
		case 1 : otRate = 1000;
		break;
		
		case 2 : otRate = 1500;
		break;
		
		default : otRate = 1700;
		break;
			
		
	}
	
	netsalary = salary + otHours* otRate ;
	cout<<"Net Salary is :" << netsalary;
	 
	 
	
	return 0;
}
