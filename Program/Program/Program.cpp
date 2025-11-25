#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

template <typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> tree;
	T data;
	bool root = false;

public:

	Graph()
	{

	}

	void insert(const T& i, const T& j)
	{
		tree[i].push_back(j);
		if (!root)
		{
			root = j;
			root = true;
		}
	}
};

int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
	// 그래프에서 한 방향으로 갈 수 있을 만큼 깊이 들어갔다가, 더 이상
	// 갈 수 없으면 다시 돌아와서 다른 경로를 탐색하는 방법 입니다.

	Graph<char> tree;

	tree.insert('A', 1);
	tree.insert('B', 2);
	tree.insert('C', 3);

#pragma endregion

	return 0;
}