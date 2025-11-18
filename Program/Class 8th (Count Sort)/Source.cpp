#include <iostream>

using namespace std;

int main()
{
#pragma region 계수 정렬
	// 데이터의 값을 비교하지 않고, 각 원소에 데이터가
	// 몇 개 있는 지 개수를 세어 저장한 다음 정렬하는 알고리즘 입니다.

	int arr[] = { 1, 1, 3, 1, 2, 3, 4, 4, 2, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int value = arr[0];
	int* count = new int[value + 1]();

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > value)
		{
			value = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		count[arr[i]]++;
	}

	int index = 0;
	for (int i = 0; i <= value; i++)
	{
		while (count[i]-- > 0)
		{
			arr[index++] = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

#pragma endregion


	return 0;
}