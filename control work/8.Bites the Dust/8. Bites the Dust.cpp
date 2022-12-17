int pow(int x, int y)
{
    int res = 1;
    for (int i = 0; i < y; i++)
    {
        res *= x;
    }
    return res;
}

int main() {
    int number = 0;
    for (int i = 0; i < 20; i++) 
    {
        if (getBit(i))
        {
            number = number + pow(2, i); 
        }
    }
    submitNumber(number);
}
