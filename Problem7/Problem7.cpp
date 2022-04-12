/*Write a program that asks from user 3 different words 
and then combine them to create a phrase.
Afterwards compare the first 2 words to see which one is alphabetically greater*/
#include <iostream>
using namespace std;
int main()
{
	string word1, word2, word3, phrase;

	cout << "Give me your first word: ";
	cin >> word1;
	cout << endl;
	cout << "Give me your second word: ";
	cin >> word2;
	cout << endl;
	cout << "Give me your third word: ";
	cin >> word3;
	cout << endl;
	cout << endl;
	phrase = word1+ " " + word2 + " " + word3;
	cout << "Your phrase is: " << phrase<<endl;

	if (word1 > word2)
		cout << "Your first word that was " << word1 << " is greater than the second word you provided!" << endl;

	else if (word2 > word1)
		cout << "Your second word that was " << word2 << " is greater than the first word you provided!" << endl;
	else
		cout << "Both of your words are equally the same.";

	return 0;
}
