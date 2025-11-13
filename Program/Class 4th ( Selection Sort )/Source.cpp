#include <iostream>

using namespace std;

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾은 다음에 특정한 위치에서
	// 결과를 교체하는 방식으로 정렬하는 알고리즘 입니다.

	int arr[5] = { 9,6,7,3,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;

			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

#pragma endregion

	return 0;
}