#include <iostream>

int sumDigits(int num)
{
    int sum = 0;

    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main( void )
{
    int x;

    std::cin >> x;

    std::cout << sumDigits(x) << "\n";
}
