#include<iostream>
using namespace std;
void InsertionSort(int A[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int value = A[i];
		int pos = i;
		while (pos > 0 && A[pos - 1] > value)
		{
			A[pos] = A[pos - 1];
			pos = pos - 1;
		}
		A[pos] = value;
	}
}
int main()
{
	int A[] = { 5, 8, 2, 1, 9, 0 };
	InsertionSort(A, 6);
	for (int i = 0; i < 6; i++)
		cout << A[i] << " ";
}
