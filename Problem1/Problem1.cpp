/* Ask user for integer values and if both numbers are even 
then it will perform addition,otherwise multiplication */
#include <iostream>
using namespace std;




int main()
{
	int num1, num2;
	cout << "Give two integer numbers and I will sum them if they are even and I will multiply them if they are odd!" << endl;
	cout << "-------------------------------------------------------------------------------------------------------" << endl << endl;

	cout << "Give first number: ";
	cin >> num1;
	cout << "Give second number: ";
	cin >> num2;

	if (num1 % 2 == 0 && num2 % 2 == 0)
	{
		cout << "Your arithmetic operation is addition and the result is: " << num1 + num2 << endl;
	}
	else
	{
		cout << "Your arithmetic operation is multiplication and the result is: " << num1 * num2 << endl;
	}

}
