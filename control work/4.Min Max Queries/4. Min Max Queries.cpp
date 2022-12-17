#include <iostream>

int max(int arr[], int n)
{
    int max = 0;
    for (short i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }

    return max;
}

int min(int arr[], int n)
{
    int min = arr[0];
    for (short i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }

    return min;
    
}

int main( void )
{
    short int q;

    std::cin >> q;

    for (short int i = 0; i < q; i++)
    {
        int n;

        std::cin >> n;

        int arr[n];

        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[j];
        }

        std::cout << max(arr, n) - min(arr, n) << "\n";
    }

    return 0;
}
