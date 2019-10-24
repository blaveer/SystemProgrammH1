#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
typedef unsigned float_bits;//93的
void subject59();
void subject60();
void subject61();
void subject76();
void subject77();
void subject88();
void subject89();
void subject90();
void subject93();
unsigned replace_byte(unsigned x, int i, unsigned char b);//60的函数
void *Calloc(size_t nmemb, size_t size);//76的函数
void Time(int x);//77的函数
int ForA(int x, double dx);//89的函数
int ForB(int x, double dx, int y, double dy);//89的函数
int ForC(double dx, double dy, double dz);//89的函数
int ForD(double dx, double dy, double dz);//89的函数
int ForE(double dx, double dz);//89的函数
float fpwr2(int x);//90的函数
float u2f(unsigned u);//90的函数
int IsNaN(float_bits f);//93的函数
float_bits float_absval(float_bits f);//93的函数