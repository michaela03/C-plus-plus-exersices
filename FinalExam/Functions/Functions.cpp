// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int * FunctionA(int arr[], int r, int l)
{
	if (r < l+8)
	{
		for (int i = 0; i <= 18; i++) {

			arr[i] = (rand() % 10);
		}
	}
	else if (r > l+7)
	{
		for (int i = l; i <= r; i++) {

			i = (rand() % 10);
			if (i % 7 == 0)
			{
				arr[i] = i;
				
			}
		}
	}

	return arr;
}

int FunctionB(int arr2[]) 
{
	if (sizeof(arr2) < 2)
	{
		return 0;
	}

	else if (sizeof(arr2)  >= 2)
	{
		int n;
		int diff = INT_MAX;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (abs(arr2[i] - arr2[j]) < diff)
					diff = abs(arr2[i] - arr2[j]);
		return diff;
	}
}

int FunctionC(int arr3[])
{
	int prev = 0;
	for (int i = 0; i < sizeof(arr3); i++)
	{
		if ((i-1) >= 0)
		{
			prev = arr3[i-1];
			if ((prev < 0 && prev % 2 != 0) && (arr3[i + 1] > 0 && arr3[i + 1] % 2 == 0))
			{
				return arr3[i];
			}
		}
		else
		{
			prev = arr3[0];
			if ((prev < 0 && prev % 2 != 0) && (arr3[i + 1] > 0 && arr3[i + 1] % 2 == 0))
			{
				return arr3[i];
			}
		}
		
	}

}

int main()
{
	int arr[] = {2,3-1,5,6,7,8,10};
	 int num = 9;
	int arr[9];
	cout << FunctionA(arr,0,18);
	cout << FunctionB(arr);
	cout << FunctionC(arr);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
