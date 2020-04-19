bool isPerfectSquare(int num)
{
	if(num == 0)
		return true;
	long n = 1, tmp;
	while((tmp = n * n) < num)
		n++;
	return n * n == num;
}
