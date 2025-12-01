#include <iostream>
#include <vector>

using namespace std;

#define INFINITY 100000000

// 인접 행렬로 구현
template <typename T>
class Dijkstra
{
	
private:
	vector<vector<int>> adj;
	vector<int> dist;// 거리배열
	vector<int> visited;// 방문배열
	T data;

public:

	void resize(int node)
	{
		int newSize = 0;

		adj.assign(data, vector<int>(data, INFINITY));

		for (int i = 0; i < data; i++)
		{
			adj[i][i] = 0;
		}

		dist.assign(data, INFINITY);

		visited.assign(data, false);
	}

	void insert(int i, int j, int weight)
	{
		adj[i][j] = weight;
		adj[j][i] = weight;
	}

};

int main()
{
	// 가중치 그래프
	// 간선의 가중치가 '비음수 실수(0 이상)' 이어야 합니다.

	/*
			1	2	3	4	5	6
		    ------------------------------
		1 |	0   2	5	1	I	I
		2 | 2   0   3   2   I   I
		3 | 5   3   0   3   1   5
		4 | 1   2   3   0   1   I
		5 | I   I   5   1   0   2
		6 | I   I   5   I   2   0
	*/
	// I 표시를 잘 모르겠어요

	Dijkstra<int> dijkstra;

	dijkstra.resize(6);


	return 0;
}