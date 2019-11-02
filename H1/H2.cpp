#include"H2.h"
void subject58() {
	decode2(1, 1, 1);
}

void subject60() {
	loop(100, 100);
}
void subject63() {

}
void subject66() {

}
void subject67();
void subject68();

long decode2(long x, long y, long z)
{
	y = y - z;
	x = x * y;
	y <<= 63;
	y >>= 63;
	return y ^ x;
}
long loop(long x, int n)
{
	long result = 0;
	long mask;
	for (mask = 1; mask != 0; mask = mask << (n % 64))//如果这里不能保证是正余数(0-63)的话，就用下面的写法
	{
		result |= (x & mask);
	}
	return result;
}
