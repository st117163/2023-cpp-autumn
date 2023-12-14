#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include "MyCstring.h"

int CountDots(char* filename)
{
	FILE* file = fopen(filename, "r");

	int n_dots = 0;
	while (!feof(file))
	{
		char c = 0;
		fscanf_s(file, "%c", &c);
		if (c == '.')
		{
			n_dots++;
		}
	}
	return n_dots;
}

int CountWords(char* filename)
{
	FILE* fin = fopen(filename, "r");
	int n_words = 0;
	char word[255] = "\0";
	while (!feof(fin))
	{
		if (fscanf(fin, "%s", word) != NULL)
		{
			n_words++;
		}
	}
	fclose(fin);
	return n_words;
}

int MaxWord(char* filename)
{
	FILE* fin = fopen(filename, "r");
	char word[255] = "\0";
	int max_word = 0;
	while (!feof(fin))
	{
		if (fscanf(fin, "%s", word) != NULL)
		{
			max_word = (max_word > strLen(word) ? max_word : strLen(word));
		}
	}
	fclose(fin);
	return max_word;
}

void ReadWords(char* filename, char** words)
{
	FILE* fin = fopen(filename, "r");

	int ind = 0;
	while (!feof(fin))
	{
		fscanf(fin, "%s", words[ind]);
		ind++;
	}
	fclose(fin);
}
char lastSymbol(char* word)
{
	return word[strLen(word) - 1];
}
void CreateSenteces(char** words, int n_words, char** sentences, int n_dots)
{
	int j = 0;
	for (int i = 0; i < n_dots; ++i)
	{

		do
		{
			strCat(sentences[i], words[j]);
			strCat(sentences[i], " ");
		} while (lastSymbol(words[j++]) != '.');
		sentences[i][strLen(sentences[i] - 1)] = '\0';
	}
}

char* MaxSentence(char** sentences, int n_dots)
{
	char* max = sentences[0];
	for (int i = 1; i < n_dots; ++i)
	{
		max = (strLen(max) > strLen(sentences[i]) ? max : sentences[i]);
	}
	return max;
}

int main(int argc, char* argv[])
{
	char filename[255] = "in.txt";

	int words = CountWords(filename);
	int max_word = MaxWord(filename);
	int n_dots = CountDots(filename);

	char** arrwords = (char**)malloc(sizeof(char*) * words);
	for (int i = 0; i < words; ++i)
	{
		arrwords[i] = (char*)malloc(sizeof(char) * max_word);
	}
	ReadWords(filename, arrwords);

	char** sentences = (char**)malloc(sizeof(char*) * n_dots);
	for (int i = 0; i < n_dots; ++i)
	{
		sentences[i] = (char*)malloc(sizeof(char) * 2000);
		sentences[i][0] = '\0';
	}
	CreateSenteces(arrwords, words, sentences, n_dots);


	FILE* fout = fopen("out.txt", "w");
	fprintf(fout, "File \"%s\" contains %d words.\n",filename, words);
	fprintf(fout, "The longest sentence is: \"%s\"\n", MaxSentence(sentences, n_dots));
	fclose(fout);
	free(arrwords);
	free(sentences);
	return EXIT_SUCCESS;
}
/*Посчитать количество слов в тексте, вывести самое длинное предложение.
Реализовать функции
strcat() - сложение строк
strstr() - поиск подстроки
substr() - выделение подстроки
strcmp() - сравнение строк
strmult() - умножение строки на число: "ba"*3 == "bababa"
*/