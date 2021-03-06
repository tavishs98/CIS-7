#include "pch.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>

using namespace std;
int gcd(int u, int v)
{
	return (v != 0) ? gcd(v, u % v) : u;
}

int main(void)
{
	string choice = "";
	do {
		int num1, num2, result;
		cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
		cin >> num1 >> num2;
		result = gcd(num1, num2);
		if (gcd)
			cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << result
			<< endl;
		else {
			cout << "\nInvalid input!!!\n";
		}
		cout << "Rerun the program? (Y/N)" << endl;
		cin >> choice;
		//return 0;
	} while (choice == "Y" || choice == "y");
	return 0;
}