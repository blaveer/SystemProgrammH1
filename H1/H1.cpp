#include "H1.h"
void subject59() {
	int x = 0x89ABCDEF;
	int y = 0x76543210;
	cout << (0xFF & x) + (0xFFFFFF00 & y) << endl;
	cout << "第59题完成" << endl << endl;
}
void subject60() {
	cout << replace_byte(0x12345678, 2, 0xAB) << endl;
	cout << replace_byte(0x12345678, 0, 0xAB) << endl;
	cout << "第60题完成" << endl << endl;
}
void subject61() {
	int x = 0xFFFFFFFF;
	int y = 0x00000000;
	int z = 0x123456FF;
	int w = 0x00123456;
	cout << "A:	";
	cout <<!~x << "	" << !~y << "	" << !~z << "	" << !~w << endl;;
	cout << "B:	";
	cout << !x << "	" << !y << "	" << !z << "	" << !w << endl;
	cout << "C:	";
	cout << !~(x | (-1 << 8)) << "	" << !~(y | (-1 << 8)) << "	" << !~(z | (-1 << 8)) << "	" << !~(w | (-1 << 8)) << endl;
	cout << "D:	";
	cout << !(x >> ((sizeof(int) - 1) << 3)) << "	" << !(y >> ((sizeof(int) - 1) << 3)) << "	" << !(z >> ((sizeof(int) - 1) << 3)) << "	" << !(w >> ((sizeof(int) - 1) << 3)) << endl;
	cout << "第61题完成" << endl << endl;
}
void subject76() {
	void *p = Calloc(10, 10);
	if (p == NULL) {
		cout << "申请内存失败" << endl;
		return;
	}
	else {
		cout << "申请10x10的内存成功" << endl;
	}
	free(p);
	cout << "已释放内存" << endl;
	cout << "第76题完成" << endl << endl;
}
void subject77() {
	cout << "请输入一个整数X" << endl;
	int x;
	cin >> x;
	Time(x);
	cout << "第76题完成" << endl << endl;
}
void subject88() {
	cout << "|-----------------------------------------------------------------------|" << endl;
	cout << "|           格 式 A		|            格 式 B			|" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;
	cout << "|     位        |    值		|        位		|    值		|" << endl;
	cout << "| 1 01110 001	|  -9/16	|	1 0110 0010	|  -9/16	|" << endl;
	cout << "| 0 10110 101	|   208		|	0 1110 1010	|    208	|" << endl;
	cout << "| 1 00111 110	| -7/2^10	|	1 0000 0111	|  -7/2^10	|" << endl;
	cout << "| 0 00000 101	|  5/2^17	|	0 0000 0000	|     0		|" << endl;
	cout << "| 1 11011 000	|  -2^12	|	1 1111 0000	|    -∞	|" << endl;
	cout << "| 0 11000 100	|   768		|	0 1111 0000	|    +∞	|" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;
	cout << "第88题完成" << endl << endl;
}
void subject89() {
	int x = rand() % 11;
	int y = rand() % 23;
	int z = rand() % 37;
	double dx = (double)x;
	double dy = (double)y;
	double dz = (double)z;
	cout << "int and float 对比:	";
	cout << ForA(x, dx) << endl;
	cout << "int-double 与int-daouble对比：";
	cout << ForB(x, dx, y, dy) << endl;
	cout << "double加法的结合律:	";
	cout << ForC(dx, dy, dz) << endl;
	cout << "double乘法的结合律:	";
	cout << ForD(dx, dy, dz) << endl;
	cout << "double除法:	";
	cout << ForE(dx, dz) << endl;
	cout << "第89题完成" << endl << endl;
}
void subject90() {
	cout << "请输入一个整数" << endl;
	int x;
	cin >> x;
	cout << fpwr2(x) << endl;
	cout << "第90题完成" << endl << endl;
}
void subject93() {
	float_bits f = -1.222;
	cout << "输入一个浮点数" << endl;
	cin >> f;

	cout << "输入的浮点数的绝对值是";
	cout << float_absval(f) << endl;
	cout << "第93题完成" << endl << endl;
}

unsigned replace_byte(unsigned x, int i, unsigned char b) {
	char *p = (char*)&x;
	p[i] = b;
	return x;
}
void *Calloc(size_t nmemb, size_t size) {
	if (nmemb == 0 || size == 0) return NULL;

	int s = nmemb * size;
	if (s / size == nmemb) {        //检测溢出
		void *p = malloc(s);
		memset(p, 0, s);
		return p;
	}
	return NULL;
}
void Time(int x) {
	cout << "对于乘以17的结果是：	" << ((x << 4) + x) << endl;
	cout << "对于乘以-7的结果是：	" << (x - (x << 3)) << endl;
	cout << "对于乘以60的结果是：	" << ((x << 6) - (x << 2)) << endl;
	cout << "对于乘以-112的结果是：	" << ((x << 4) - (x << 7)) << endl;
}
/*下面五个函数是89题的*/
int ForA(int x, double dx) {
	return (float)x == (float)dx;	
}
int ForB(int x, double dx, int y, double dy) {
	return dx - dy == (double)(x - y);
}
int ForC(double dx, double dy, double dz) {
	return (dx + dy) + dz == dx + (dy + dz);
}
int ForD(double dx, double dy, double dz) {
	return (dx*dy)*dz == dx * (dy*dz);
}
int ForE(double dx, double dz) {
	return dx / dx == 1 / 1;
}

float fpwr2(int x){
	/* Result exponent and fraction */
	unsigned exp, frac;
	unsigned u;
	if (x < -149) {
		/* Too small. Return 0.0 */
		exp = 0;
		frac = 0;
	}
	else if (x < -126) {
		/* Denormalized result */
		exp = 0;
		frac = 1 << (x + 149);
	}
	else if (x < 128) {
		/* Normalized result. */
		exp = x + 127;
		frac = 0;
	}
	else {
		/* Too big. Return +oo */
		exp = 0xFF;
		frac = 0;
	}
	/* Pack exp and frac into 32 bits */
	u = exp << 23 | frac;
	/* Return as float */
	return u2f(u);
}
float u2f(unsigned u)
{
	return *(float*)&u;
}


int IsNaN(float_bits f) {
	if (((f & 0x7F800000) == 0x7F800000) && ((f & 0x7FFFFF) != 0))
		return 1;
	return 0;
}

float_bits float_absval(float_bits f) {
	if (IsNaN(f)) {
		return f;
	}
	else {
		return f & 0x7FFFFFFF;
	}
}
