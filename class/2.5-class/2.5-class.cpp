#include <iostream>
#include <cmath>

using namespace std;

int main( void )
{
    unsigned int a, k, x=0, y=0;
    unsigned short int c;

    cin >> a >> k >> c;

    switch (c)
    {
    case 1:
        if((a >> k) & 1)
        {
            cout << 1;
        }
        else 
        {
            cout << 0;
        }
        break;
    case 2:
        x = (a | (1 << k));
        cout << x;
        break;
    default:
        if ((a >> k) & 1)
        {
            y = (a ^ (1 << k));
            cout << y;
        }
        else 
        {
            cout << a;
        }
        
        break;
    }

    return 0;
}
