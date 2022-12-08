#include <iostream>

using namespace std;

int main( void )
{
	unsigned int k, n;
	unsigned int step = 0;

	cin >> k >> n;

	step = n / k;

	if ( n - step * k > (step + 1) * k - n)
	{
		step = (step + 1) + ((step + 1) * k - n);
	}
	else
	{
		step = step + (n - step * k);
	}
	
	cout << step << endl;

	return 0;
}
