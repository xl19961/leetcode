bool canMeasurewater(int x, int y, int z)
{
	if(x + y < 2) return false;
	if(x == 0 || y == 0 ) return z == 0 || x + y == z;
	return z % gcd(x,y) == 0;
}
