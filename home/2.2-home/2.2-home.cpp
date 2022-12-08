#include <iostream>
using namespace std;
int main( void )
{
	int y;
	cin >> y;
	if (y % 4 || y % 100 == 0 && y % 400)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << 1 << endl;
	}
}
