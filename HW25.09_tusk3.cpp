#include <iostream>
using namespace std;

void Sorting(double arr[], int total)
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
}

int main()
{
	int total = 5;
	double arr[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < total; i++)
	{
		cout << arr[i];
	}
	cout << "\n";
	Sorting(arr, total);
}