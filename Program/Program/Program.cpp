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

int main()
{
#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
	// 좁혀나가는 방식으로 동작하는 알고리즘입니다.

	int arr[] = { 5, 6, 11, 13, 27, 55, 66, 92 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int target = 66;

	int result = pivot(arr, size, target);

	cout << result << endl;
	
#pragma endregion


	return 0;
}