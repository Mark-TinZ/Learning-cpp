#include <iostream>
using namespace std;

int main( void )
{
    int n, x;
    cin >> n;
    int* array = new int[n];

    for (int i = n-1; i >= 0; i--)
    {
        cin >> x;
        array[i] = x; 
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
}
