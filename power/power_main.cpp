#include <iostream>
using namespace std;


int main()
{
	int base, expo;
	cout << "Enter your base number" <<endl;
	cin >> base;
	cout << "Enter your exponent, make sure its not negative" << endl;
	cin >> expo;
	
	int result = power(base,expo);
	cout << result << endl;

	return 0;
}

int power(int base, int expo)
{
	if(expo == 0)
	{
		return 1;
	}
	else if (expo % 2 == 0)
	{
		return base * base;
	}
	else 
	{
		return base * power(base, (expo - 1));
	}
}
