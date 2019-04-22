#include <iostream>
using namespace std;

void sign(int n)
{
	while (n > 0)
	{
		cout << "No Parking: " << n << endl;
		return sign(n-1);
	}
} 

int main()
{
	sign(4);
	return 0;
}


