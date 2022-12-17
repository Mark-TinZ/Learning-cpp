#include <iostream>

int main( void )
{
    short int n, a, b;
    int c = 0;
    char op;

    std::cin >> n;

    for (short int i = 0; i < n; i++)
    {
        std::cin >> a >> op >> b;

        switch (op)
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
            case 47:
                if (a % b)
                {
                    std::cout << "No\n";
                    continue;
                }
                c = a / b;
            break;
        }

        std::cout << c << "\n";
        
    }
    
    return 0;
}
