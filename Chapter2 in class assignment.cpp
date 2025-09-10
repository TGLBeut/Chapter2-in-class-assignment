/*File Name: Chapter2 in class assignment.cpp
*Programmer: <Sean Greene>
*Date: <9/10/2025>
* Requirements:
* Create a program that computes total sales tax on a $95 purchase.
*set sales tax to 4 percent and county tax to 2 percent.
*/

#include <iostream>
using namespace std;
//const double stateTax = .04;
//const double countyTax = .02;

int main()
{
	double stateTax;
	double countyTax;
	double itemCost;

	cout << "Please enter the state tax (as a decimal point): ";
	cin >> stateTax;
	cout << endl << "Please enter the county tax (as a decimal point): ";
	cin >> countyTax;
	cout << "\n What is the cost of the item you are purchasing? ";
	cin >> itemCost;

    //double itemCost = 0.0; // Removed to avoid redefinition error
	double totaltax = itemCost * stateTax + itemCost * countyTax;
	double totalCost = itemCost + totaltax;

	cout << "The cost of the item is $" << itemCost << "\n";
	cout << "The total tax including a state tax of " << stateTax << endl;
	cout << " and a county tax of " << countyTax << endl;
	cout << " You owe the store a total of " << totalCost;


		return 0;
}