#include <iostream>
#include <vector>

using namespace std;

class shellsort
{
private:
	vector<int> list;

public:

	void sort(vector<int>& arr, int gap)
	{
		int start = 0;

		for (int i = start; i < arr.size(); i += gap)
		{
			list.push_back(arr[i]); // 부분 리스트 생성
		}

		// 부분 리스트 삽입 정렬 진행
		for (int i = 1; i < list.size(); i++)
		{
			int key = list[i];
			int j = i - 1;

			while (j >= 0 && list[j] > key)
			{
				list[j + 1] = list[j];
				j--;
			}
			list[j + 1] = key;
		}

		int index = start;
		for (int i = 0; i < list.size(); i++)
		{
			arr[index] = list[i];
			index += gap;
		}

	}
};

int main()
{
#pragma region 쉘 정렬
	// 리스트를 일정한 간격에 따라 나누고, 각 부분 리스트를 삽입 정렬을 통해
	// 정렬하는 방법 입니다.

	// 1. 초기 시작 간격을 설정합니다.

	// 2. 간격 단위로 그룹을 묶어서 리스트를 나눕니다.

	// 3. 각 그룹의 n번째 원소들끼리 삽입 정렬을 수행합니다.

	// 4. 간격의 크기를 반으로 줄입니다.

	// 5. 간격이 1이 될 때까지 2번부터 반복합니다.

	// 14 57 21 8 36 25 32 19

	/*
	- 정렬해야 할 리스트의 각 k번째 요소를 추출해서 부분 리스트를 생성합니다.
	- k = 간격(gap)
	- 간격의 초기값 : (정렬할 값의 수) / 2
	*/

	/*shellsort shell;

	vector<int> arr = { 14, 57, 21, 8, 36, 25, 32, 19 };
	int gap = 3;

	shell.sort(arr, gap);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}*/

	int list[] = { 14, 57, 21, 8, 36, 25, 32, 19 };

	int size = sizeof(list) / sizeof(list[0]);

	int k = size / 2;

	while (k > 0)
	{
		for (int i = k; i < size; i++)
		{
			int key = list[i];

			int j = i;

			while (j >= k && list[j - k] > key)
			{
				list[j] = list[j - k];

				j -= k;
			}

			list[j] = key;
		}
		k /= 2;
	}

	for (const auto& element : list)
	{
		cout << element << " ";
	}

#pragma endregion


	return 0;
}