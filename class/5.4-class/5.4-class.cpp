int min ( int a, int b )
{
    int res = (a < b) ? a : b;
    return res;
}

int product ( int a, int b )
{
    int res = a * b;
    return res;
}

int pow ( int a, int b )
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}
