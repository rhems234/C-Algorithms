#include <iostream>

using namespace std;

void sieve(int n)
{
	// 특정한 숫자의 제곱근까지만 약수의 여부를 검증
	int* arr = new int[n + 1];

	for (int i = 0; i <= n; i++)
	{
		arr[i] = 1;
	}

	arr[0] = arr[1] = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (arr[i] == 1)
		{
			for (int j = i * i; j <= n; j += i)
			{
				arr[j] = 0;
			}
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == 1)
		{
			cout << i << " " << endl;
		}
	}

	delete[] arr;
}

int main()
{
#pragma region 에라토스테네스의 체
	/*int arr[20];
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 2; i < size; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i < size; i++)
	{
		int j;
		for (j = 2; j < i; j++)
		{
			if (arr[i] % j == 0)
			{
				break;
			}
		}

		if (j == i)
		{
			cout << arr[i] << endl;
		}

	}*/
#pragma endregion

#pragma region 에라토스테네스의 체 2

	sieve(50);

#pragma endregion

	return 0;
}