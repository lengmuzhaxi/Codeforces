#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T>
int count(T a[], int n, const T&value)
{
	int theCount = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == value)
			theCount++;
	return theCount;
}
int main()
{
	int a[] = { 1,2,2,3,4,4,2,2 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << count(a, n, 2);
}