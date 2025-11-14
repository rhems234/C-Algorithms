#include <iostream>

using namespace std;

int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘 입니다.

	int arr[] = { 5, 2, 3, 6, 9, 7, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key, j;

	for (int i = 0; i < size; i++)
	{
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
		{
			if (arr[j] > key)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

#pragma endregion

	return 0;
}