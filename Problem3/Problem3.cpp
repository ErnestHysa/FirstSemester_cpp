/* Program to check if input is palindrome */

#include <iostream>
using namespace std;


int main()
{
    int numberInput,firstDigit, secondDigit, fourthDigit, fifthDigit;
    bool isValid = true;


    while (isValid)
    {
        int option;
        cout << "Give any 5 digit number: ";
        cin >> numberInput;


        firstDigit = numberInput / 10000;
        secondDigit = numberInput % 10000 / 1000;
        fourthDigit = numberInput % 10000 % 1000 % 100 / 10;
        fifthDigit = numberInput % 10000 % 1000 % 100 % 10;


        if (firstDigit == secondDigit && fourthDigit == fifthDigit)
            cout << "The number you have provided is a palindrome!" << endl<<endl;

        else
            cout << "The number you have provided is not a palindrome!" << endl<<endl;

        cout <<"=========================================================="<<endl<<endl;

        cout << "If you would like to terminate the program please press 0!"<<endl<<endl;
      
        cout<< "=========================================================="<<endl<<endl;
        cin >> option;
        if (option == 0)
            isValid = false;
        cout << endl;
    }
}

