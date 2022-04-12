/* Write a program that asks from user to input N number 
and then one less than N (K<N).
The program will calculate how many positive numbers are between range K and N 
and then it will show the sum of the positive numbers in between. */


#include <iostream>
using namespace std;
int main()
{
	 
	int K, N, i, sumPositive = 0, totalPositive = 0;

	cout << "Give me the number to begin"<<endl;
	cin >> K; //value to start the range
	cout << "Give me the number to end" << endl;
	cin >> N; //value to stop/limit the range
	//first number has to be less than second
	while (K>=N)
	{
		cout << "Your second number can't be less than your first number!" << endl;
		cout << "Please provide a number that's < than the first number: ";
		cin >> N;

	}


	for (i = K+1; i <= N-1; i++)
	{
		if (i > 0)
		{
			sumPositive += i;
			totalPositive++;
		}
		  
	}

	cout << "Your total of positive numbers is: " << totalPositive<<"\nWhereas your sum total of the positive numbers is: "<<sumPositive;




	return 0;
}

