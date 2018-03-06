/* This program checks whether
an input integer is a prime number. */

#include <iostream>
using namespace std;

bool isPrimeNum(int n)
{
	for (int i = 2; i <= n / 2; ++i)
	{
		if (!(n % i))
			return false;
	}
	return true;
}

int main()
{
	int n;
	while (true) {
		cout << "Enter a positive integer: ";
		cin >> n;

		if (isPrimeNum(n))
			cout << n << " is a prime number.\n";
		else
			cout << n << " is not a prime number.\n";
	}
	//system("pause");
	return 0;
}
