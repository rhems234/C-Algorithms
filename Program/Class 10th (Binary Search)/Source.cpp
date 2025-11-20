#include <iostream>

using namespace std;

int pivot(int arr[], int index, int target)
{
	int left = 0;
	int right = index - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

		return -1;
	}
}

void search(int list[], int key, int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2;

		if (list[pivot] == key)
		{
			cout << "key found : " << list[pivot] << endl;

			return;
		}
		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}
		else
		{
			left = pivot + 1;
		}
	}

	cout << "not key found" << endl;

}

int main()
{
#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀나가는 방식으로 동작하는 알고리즘입니다.

	/*int arr[] = { 5, 6, 11, 13, 27, 55, 66, 92 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int target = 66;

	int result = pivot(arr, size, target);

	cout << result << endl;*/

	int list[] = { 5, 6, 11, 13, 27, 55, 66, 92 };

	int size = sizeof(list) / sizeof(list[0]);

	search(list, 66, size);
#pragma endregion


	return 0;
}