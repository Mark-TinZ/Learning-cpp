#include <iostream>
#include <vector>


std::vector <int> merge(std::vector <int> a, std::vector <int> b)
{
    std::vector <int> c(a.size() + b.size());

    for (int i = 0; i < a.size(); i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        c[a.size() + i] = b[i];
    }

    return c;
}


int main( void )
{
    int n = 5;
    std::vector <int> a(n);
    a[0] = 3;
    a[1] = 4;
    a[2] = 2;
    a[3] = 5;
    a[4] = 9;

    int m = 3;
    std::vector <int> b(m);
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;

    std::vector <int> c = merge(a, b);


    bool isCorrect = true;
    if (c.size() != a.size() + b.size()) {
        isCorrect = false;
    }
    for (int i = 0; i < n; ++i) {
        if (c[i] != a[i]) {
            isCorrect = false;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (c[n + j] != b[j]) {
            isCorrect = false;
        }
    }

    if (isCorrect) {
        std::cout << "OK!\n";
    } else {
        std::cout << "NO!\n";
    }
}

