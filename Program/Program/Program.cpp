#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

template <typename T>
class Graph
{
private:
	unordered_map <T, int> degree;
	unordered_set <T> vertices;
	unordered_map<T, vector<T>> adjacencyList;

public:

	void insert(const T& i, const T& j)
	{

		adjacencyList[i].push_back(j);

		degree[j]++;

		vertices.insert(i);
		vertices.insert(j);

		if (degree.count(i) == false)
		{
			degree[i] = 0;
		}

	}

	void Sort()
	{
		queue<T> queue;

		for (const T& v : vertices)
		{
			if (degree[v] == 0)
			{
				queue.push(v);
			}
		}

		int count = 0;

		while (!queue.empty())
		{
			T current = queue.front();
			queue.pop();

			cout << current << " ";

			count++;

			for (const T& element : adjacencyList[current])
			{
				degree[element]--;

				if (degree[element] == 0)
				{
					queue.push(element);
				}
			}
		}

		if (vertices.size() != count)
		{
			cout << "cycle has occurred" << endl;
		}
	}

};

int main()
{
#pragma region 위상 정렬
	// 병합 그래프에 존재하는 각 정점들의 선행 순서를 지키며,
	// 모든 정점을 차례대로 진행하는 방식의 정렬입니다.

	// 사이클이 발생하는 경우 위상 정렬을 수행할 수 없습니다.

	// DAG(Directd Acyclic Graph) : 사이클이 존재하지 않는 그래프

	// 시간 복잡도 : O(V + E)

	// 위상 정렬하는 방법

	// 1. 진입 차수가 0인 정점을 Queue에 삽입합니다.

	// 2. Queue에서 원소를 꺼내 연결된 모든 간선을 제거합니다.

	// 3. 간선 제거 이후에 진입 차수가 0이 된 정점을 Queue에 삽입합니다.

	// 4. Queue가 비었을 때까지 2 ~ 3번 작업ㅇ르 반복적으로 수행합니다.

	Graph<int> graph;

	graph.insert(1, 2);
	graph.insert(1, 5);

	graph.insert(2, 3);
	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(5, 6);
	graph.insert(6, 7);

	graph.Sort();

#pragma endregion


	return 0;
}