#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
typedef unsigned float_bits;//93��
void subject59();
void subject60();
void subject61();
void subject76();
void subject77();
void subject88();
void subject89();
void subject90();
void subject93();
unsigned replace_byte(unsigned x, int i, unsigned char b);//60�ĺ���
void *Calloc(size_t nmemb, size_t size);//76�ĺ���
void Time(int x);//77�ĺ���
int ForA(int x, double dx);//89�ĺ���
int ForB(int x, double dx, int y, double dy);//89�ĺ���
int ForC(double dx, double dy, double dz);//89�ĺ���
int ForD(double dx, double dy, double dz);//89�ĺ���
int ForE(double dx, double dz);//89�ĺ���
float fpwr2(int x);//90�ĺ���
float u2f(unsigned u);//90�ĺ���
int IsNaN(float_bits f);//93�ĺ���
float_bits float_absval(float_bits f);//93�ĺ���