#include <iostream>
using namespace std;


int main()
{
	int numberInput, i,j;
	bool isValid = true;

	cout << "Enter 5 numbers between 1 and 30!!" << endl;

	

	for (i = 1; i <= 5; ++i)
	{
		do
		{
			cin >> numberInput;
		} while (numberInput < 1 || numberInput>30);
		for (j = 1; j <= numberInput; ++j)
		{
			cout << "*\n";

		}
		cout << endl;
	}


	return 0;
}
	



