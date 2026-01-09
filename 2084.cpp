#include<iostream>
using namespace std;
#include<algorithm>

int Level(int num)
{
	int level = 0;
	int i = 1;
	while (num > 0) {
		level++;
		num -= i;
		i++;
	}
	return level;
}

int Biggest(int num, int* tower, int now)
{
	if (now > num - Level(num))
		return tower[now];
	return max(Biggest(num, tower, now + Level(now)), Biggest(num, tower, now + Level(now) + 1)) + tower[now];
}

int main()
{
	int C, N, tower[5051];
	cin >> C;
	while (C--) {
		cin >> N;
		for (int i = 1; i <= (N + 1) * N / 2; i++)
			cin >> tower[i];
		cout << Biggest((N + 1) * N / 2, tower, 1) << endl;
		memset(tower, 0, 5051);
	}
	return 0;
}