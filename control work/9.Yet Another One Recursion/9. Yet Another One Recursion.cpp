#include <iostream>

int f(int x)
{
    switch (x)
    {
        case 1:
        case 2:
        case 3:
            return 1;
        break;
        default:
            return f(x - 1) + f(x - 2) + f(x - 3);
        break;
    }
}

int main( void )
{
    int x;

    std::cin >> x;

    std::cout << f(x) << "\n";
}
