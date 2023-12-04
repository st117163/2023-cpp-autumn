#pragma once
#include <iostream>
#include <ctime>
#include <algorithm>

void printArray(int* a, int len);
void expandArray(int*& a, int& len);
void addElement(int*& a, int& len, int element);
void contractArray(int*& a, int& len);
bool indexValid(int index, int len);
int extractElement(int*& a, int& len, int index);
void ReverseArray(int*& a, int len);
void printMenu();

void appendRandomElements(int*& a, int& len, int n);
void extractRepetitions(int*& a, int& len);
void swapMinMax(int*& a, int len);
void stdSort(int* a, int len);