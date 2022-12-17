void mySort2(int* x, int* y)
{
    int temp = 0;
    
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }

    return;
}
