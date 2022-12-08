#include <iostream>
//#include <bitset>


using namespace std;

int main( void )
{
    unsigned int a, k, mask = 0;
    unsigned short c;

    cin >> a >> k >> c;
    //cout << a << " - " << bitset<32> (a) << endl;

    switch (c)
    {
        case 1:
            mask = a >> k;
            a = mask << k;
        break;
        case 2:
            //mask = (bool((1 << k)  &  a) << k);
            //a = a ^ mask;
    		a = a ^ (1 << k);
        break;
        case 3:
    		mask = a << (32 - k);
            a = mask >> (32 - k);
        break;
    }

    cout << a;
    //cout << a << " - " << bitset<32> (a) << endl;
}
