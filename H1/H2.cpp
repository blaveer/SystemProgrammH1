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
	for (mask = 1; mask != 0; mask = mask << (n % 64))//������ﲻ�ܱ�֤��������(0-63)�Ļ������������д��
	{
		result |= (x & mask);
	}
	return result;
}
