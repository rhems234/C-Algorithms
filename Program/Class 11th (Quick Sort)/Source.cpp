#include <iostream>

using namespace std;

//void sort1(int list[], int start, int end)
//{
//
//	if (start >= end)
//	{
//		return;
//	}
//
//	int pivot = list[start];
//	int left = start - 1;
//	int right = end;
//
//	while (left <= right)
//	{
//		while (left < right && list[left] <= pivot)
//		{
//			left++;
//		}
//
//		while (right < left && list[right] > pivot)
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int temp = list[left];
//			list[left] = list[right];
//			list[right] = temp;
//		}
//	}
//
//	int temp = list[start];
//	list[start] = list[right];
//	list[right] = temp;
//
//	sort1(list, start, right - 1);
//	sort1(list, right + 1, end);
//}

void sort(int list[], int start, int end)
{

	if (start >= end)
	{
		return;
	}

	// pivot 변수의 값을 설정합니다.
	int pivot = start;

	// left 변수의 값을 설정합니다.
	int left = start + 1;

	// right 변수의 값을 설정합니다.
	int right = end;

	// left가 right보다 커질 때까지 반복합니다.
	while (left <= right)
	{
		// left가 end보다 작거나 같고 list[left]가
		// list[pivot]보다 작거나 같을 때 까지 반복합니다.

		while (left < end && list[pivot] >= list[left])
		{
			left++; // left의 값을 증가시킵니다.
		}

		// right가 start보다 크고 list[right]가
		// list[pivot] 보다 크거나 같을 때까지 반복합니다.
		while (right > start && list[pivot] <= list[right])
		{
			right--; // right의 값을 감소시킵니다.
		}

		if (left > right)
		{
			std::swap(list[pivot], list[right]);
		}
		else
		{
			std::swap(list[left], list[right]);
		}
	}

	// pivot을 기준으로 나누어진 두 배열에 대해
	// 재귀적으로 퀵 정렬을 호출합니다.
	sort(list, start, right - 1);
	sort(list, right + 1, end);
}



int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한쪽에는
	// 기준점보다 작은 값들이 위치하게 한 다음 다른 한쪽에는 기준점보다
	// 큰 값들이 위치하도록 합니다.

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬합니다.

	// 5 3 8 4 1 6 2 7
	// pivot = 0, left = 1, right = 7

	// pivot > left 오른쪽 한 칸 이동
	// pivot < left stop 후 right로 이동
	int list[] = { 1, 3, 2, 4, 5, 6, 8, 7 };
	int size = sizeof(list) / sizeof(list[0]);

	sort(list, 0, size - 1);

	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}

#pragma endregion



	return 0;
}