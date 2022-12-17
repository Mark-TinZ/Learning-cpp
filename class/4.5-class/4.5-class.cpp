#include <iostream>

int main( void )
{
    int n = 0;
    std::cin >> n;
    int a[n - 1];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            switch (i)
            {
                case 0:
                    if ((a[j] % 3) == 0)
                    {
                        std::cout << a[j] << " ";
                    }
                break;
                case 1:
                    if ((a[j] % 3) == 1 || (a[j] % 3) == -2)
                    {
                        std::cout << a[j] << " ";
                    }
                break;
                case 2:
                    if ((a[j] % 3) == 2 || (a[j] % 3) == -1)
                    {
                        std::cout << a[j] << " ";
                    }
                break;
                    
            }
        }
        
    }
    
}
