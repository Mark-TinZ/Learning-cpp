#include <iostream>

int main( void )
{
    short int a, b;
    int c = 0;
    char action = 0;

    std::cin >> a >> action >> b;

    switch (action)
    {
        case 43:
            c = a + b;
        break;
        case 45:
            c = a - b;
        break;
        case 42:
            c = a * b;
        break;
    }

    std::cout << c << "\n";

    return 0;
}
