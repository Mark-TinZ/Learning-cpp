void swapPtr(long long* x, long long* y)
{
	long long temp = *x;
	*x = *y;
	*y = temp;
}

void swapRef(long long& x, long long& y)
{
	long long tempx = x;
	long long tempy = y;
	x = tempy;
	y = tempx;
}
