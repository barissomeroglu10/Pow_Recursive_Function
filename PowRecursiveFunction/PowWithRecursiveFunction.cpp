/*
In this code, we see pow function with recursive method.

Developer = Barış Someroğlu
Date = 21.04.2024 - 04:10 pm
*/


#include <iostream>

using namespace std;

// Prototype for function
int Pow(int, int);

int main()
{
	int Flor, Base;

	cout << "Please Enter Flor Number = ";
	cin >> Flor;

	cout << "Please Enter Base Number = ";
	cin >> Base;

	cout << "\n";

	cout << "Result is = " << Pow(Flor, Base) << endl; // Call the function

	return 0;
}

// Function definition
int Pow(int Flor, int Base)
{
	if (Base < 0)
		return -1;

	else if (Base == 0)
		return 1;

	else
		return Flor * Pow(Flor, Base - 1);
}