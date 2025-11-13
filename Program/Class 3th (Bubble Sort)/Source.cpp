#include <iostream>

using namespace std;

int main()
{
	/*
	인플레이스 정렬

	정렬 과정에서 추가적인 자료구조 또는 메모리 공간을 많이 사용하지 않고,
	원래 주어진 배열이나 리스트 자체를 직접 수정하여 정렬하는 방식입니다.
	*/

#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘입니다.
	// 넣은 수만큼 크기가 증가해야됨

	int number[5] = { 7, 4, 5, 1, 3 };
	int size = sizeof(number) / sizeof(number[0]);
	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (number[j] > number[j + 1])
			{
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << number[i] << " ";
	}

#pragma endregion

	return 0;
}