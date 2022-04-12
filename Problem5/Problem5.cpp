/* Show number from 1 to 100 and then show first the even number 
from the range given and then show the odd numbers.
Use the 3 loop statements.*/
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		cout << setw(8) << i;
	}
	cout << endl<<endl;
	
	i = 2;

	while (i<=100)
	{
		
		    cout << setw(8) << i;
			i += 2;
	}
	
	cout << endl<<endl;

	i = 1;
	do
	{
			cout << setw(8) << i;
			i += 2;


	} while (i <= 100);




	return 0;
}