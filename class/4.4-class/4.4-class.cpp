#include <iostream>

int main()
{
    int n, x, count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (!(x % 2))
        {
            count++;
        }
        
    }
    std::cout << count << "\n";
    return 0;    
}
