#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main( void )
{
	float x, y, eps=0.001, ost=0.001;

    cin >> x >> y;
    ost = x - y;
    if (ost < 0) 
    {
        ost = ost * -1;
    }

    if (ost <= eps)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

	return 0;
}

