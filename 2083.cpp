#include<iostream>
using namespace std;

void shortest(int N, int* friends)
{
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			int temp;
			if (friends[j] > friends[j + 1]) {
				temp = friends[j];
				friends[j] = friends[j + 1];
				friends[j + 1] = temp;
			}
		}
	}
	int start = friends[(N + 1) / 2 - 1];
	int time = 0;
	for (int i = 0; i < N; i++)
		time += fabs(start - friends[i]);
	cout << time << endl;
}

int main()
{
	int M, N;
	int friends[500];
	cin >> M;
	while (M--) {
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> friends[i];
		shortest(N, friends);
		memset(friends, 0, N);
	}
	return 0;
}