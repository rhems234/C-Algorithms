#include <iostream>
#include <vector>

using namespace std;

void combination(int start, int n, int r, vector<int>& vector)
{
	
	if (r == 0)
	{
		for (int x : vector)
		{
			cout << x << " ";
		}
		cout << endl;
		return;
	}

	if (start > n)
	{
		return;
	}

	vector.push_back(start);

	combination(start + 1, n, r - 1, vector);

	vector.pop_back();

	combination(start + 1, n, r, vector);
	
}

int main()
{
#pragma region 퇴각 검색
	// 조건을 만족하는 한 계속 검사해 나가다, 조건에 부합하지 않는 순간
	// 탐색을 취소하고 이전 단계로 돌아온 뒤 탐색을 이어나가는 탐색입니다.

	// 1. 가지치기 (Pruning) 조건
	// 현재 상태가 앞으로 더 진행해도 정답이 될 가능성이 있는 지 판단하는 조건 입니다.

	// 순열 : '순서'가 중요하게 고려되어 n 개 중 r개를 뽑아 나열하는 경우의 수.

	// 조합 : '순서'에 상관없이 n개 중 r개를 뽑기만 하는 경우의 수.

	// {1, 2, 3, 4}

	int n = 0;
	int r = 0;

	cout << "Please enter n : ";
	cin >> n;

	cout << endl;

	cout << "Please enter r : ";
	cin >> r;

	vector<int> container;

	combination(1, n, r, container);

#pragma endregion

	return 0;
}