#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include "MyCstring.h"

int strLen(const char* s1);
char* strCpy(char* s1, const char* s2);
char* strCat(char* s1, const char* s2);
char* strStr(char* s1, char* s2);
int strStrInd(char* s1, char* s2);
char* subStr(char* s1, int start, int len);
int strCmp(char* s1, char* s2);
char* strMult(char* s1, int n);
