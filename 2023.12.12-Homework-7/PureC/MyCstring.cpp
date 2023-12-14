#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include "MyCstring.h"

const int size_str = 255;

int strLen(const char* s1)
{
	int res = 0;
	while (s1[res] != '\0')
	{
		res++;
	};
	return res;
}

char* strCpy(char* s1, const char* s2)
{
	for (int i = 0; i <= sizeof(s2); i++)
	{
		s1[i] = s2[i];
	}
	return s1;
}

char* strCat(char* s1, const char* s2)
{
	int size_s1 = strLen(s1);
	for (int i = 0; i < strLen(s2); i++)
	{
		s1[size_s1 + i] = s2[i];
	}
	s1[size_s1 + strLen(s2)] = '\0';
	return s1;
}

char* strStr(char* s1, char* s2)
{
	int len_s1 = strLen(s1);
	int len_s2 = strLen(s2);
	printf("%d, \t %d\n", len_s1, len_s2);
	if (len_s1 < len_s2)
	{
		printf("Error: the substring is longer than string.\n");
		return NULL;
	}
	if (len_s2 == 0)
	{
		return s1;
	}
	for (int i = 0; i < len_s1; i++)
	{
		for (int j = 0; j < len_s2; i++)
		{
			if (s1[i + j] != s2[j])
			{
				break;
			}
			if (j == len_s2 - 1)
			{
				return s1 + i;
			}

		}
	}
	return NULL;
}

int strStrInd(char* s1, char* s2)
{
	int len_s1 = (int)strLen(s1);
	int len_s2 = (int)strLen(s2);
	if (len_s1 < len_s2)
	{
		printf("Error: the substring is longer than string.\n");
		return NULL;
	}
	for (int i = 0; i < len_s1; i++)
	{
		for (int j = 0; j < len_s2; i++)
		{
			if (s1[i + j] != s2[j])
			{
				break;
			}
			if (j == len_s2 - 1)
			{
				return i;
			}

		}
	}
	return NULL;
}

char* subStr(char* s1, int start, int len = -1)
{
	char* new_str = s1 + start;
	if (len != -1)
	{
		new_str[len] = '\0';
	}
	return new_str;
}


int strCmp(char* s1, char* s2)
{
	for (int i = 0; i <= (int)strLen(s1); i++)
	{
		if ((int)s1[i] > (int)s2[i])
		{
			return 1;
		}
		else if ((int)s1[i] < (int)s2[i])
		{
			return -1;
		}
	}
	return 0;
}

char* strMult(char* s1, int n)
{
	char temp_str[255] = "\0";
	strCpy(temp_str, s1);

	while (--n)
	{
		strCat(s1, temp_str);
	}
	return s1;
}