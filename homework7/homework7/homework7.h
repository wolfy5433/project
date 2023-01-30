#pragma once
#include<iostream>
using namespace std;
int* randArr(int n)
{
	int* arr = new int[n];
	for (int i = 0; i <= n - 1; i++)
	{
		arr[i] = rand() % 25 + 1;
	}
	return arr;
}

int* mas(int arr1[], int arr2[], int n)
{
	int* arr = new int[n];
	for (int i = 0; i <= n - 1; i++)
	{
 arr[i] =( arr1[i] +  arr2[i]) / 2;

	}

	return arr;
}

