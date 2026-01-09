#include<iostream>
using namespace std;

int dijkstra()

int main()
{
	int T, S, D, citysum = 0;
	int road[100][3];
	int near[100], dest[100], city[100];
	int distance[1000];
	memset(distance, -2, sizeof(distance));
	while (cin >> T) {
		cin >> S >> D;
		for (int i = 0; i < T; i++) {
			cin >> road[i][0] >> road[i][1] >> road[i][2];

			bool flag = 1;
			for (int j = 0; j < citysum; j++) {
				if (city[j] == road[i][0])
					flag = 0;
			}
			if (flag) {
				city[citysum] = road[i][0];
				citysum++;
			}

			flag = 1;
			for (int j = 0; j < citysum; j++) {
				if (city[j] == road[i][1])
					flag = 0;
			}
			if (flag) {
				city[citysum] = road[i][1];
				citysum++;
			}

			distance[road[i][0]] = -1;
			distance[road[i][1]] = -1;
		}
		for (int i = 0; i < S; i++) {
			cin >> near[i];
			distance[near[i]] = 0;
		}
		for (int i = 0; i < D; i++)
			cin >> dest[i];

	}
	return 0;
}