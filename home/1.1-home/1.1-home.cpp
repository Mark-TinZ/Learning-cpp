#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    // create var x, y, z
	double x; 
	double y; 
    int z;

    // input var x, y
	cin >> x >> y;

    // output var x, y
	z = x / y;
	cout << z << endl;

    z = ceil(x / y);
	cout << z << endl;
}
