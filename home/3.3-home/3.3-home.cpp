void check(int* x, int* y)
{
    if(x != y)
    {
        *x = 1;
        *y = 1;
    } 
    else 
    {
        *x = 0;
    }
}
