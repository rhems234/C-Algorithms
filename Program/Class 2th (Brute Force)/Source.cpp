#include <iostream>

using namespace std;

int main()
{
#pragma region 완전 탐색
	// 가능한 모든 경우의 수를 탐색하면서
	// 결과를 찾아내는 알고리즘 입니다.

	int password[] = { 5, 9, 3 };

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {

				if (i == password[0] && j == password[1] && k == password[2]) {
					cout << "release : " << i << ", " << j << ", " << k << endl;

					return 0;
				}

			}
		}
	}

#pragma endregion


	return 0;
}