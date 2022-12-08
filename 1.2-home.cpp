#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
 
int main()
{
    double a=1.5, b=1.5, c=1.5, d, x1, x2;
    cin >> a >> b >> c;
    d = pow(b,2) - (4 * a * c);


	cout << setprecision(5) << fixed;

    if(d == 0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
		if (x1 < x2)
		{
			cout << x1 << endl;
			cout << x2 << endl;
		}
		else
		{
			cout << x2 << endl;
			cout << x1 << endl;
		}
    }
    if(d > 0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        if (x1 < x2)
		{
			cout << x1 << endl;
			cout << x2 << endl;
		}
		else
		{
			cout << x2 << endl;
			cout << x1 << endl;
		}
    }
    if(d < 0)
    {
        cout<<" "<<endl;
    }    return 0;
}
