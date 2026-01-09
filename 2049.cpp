#include<iostream>
using namespace std;

long long Cpaixu(int N, int M)
{
	if (M > N / 2)
		M = N - M;
	long long res = 1;
	for (int i = N; i > N - M; i--)
	{
		res *= i;
	}
	for (int i = 2; i <= M; i++)
	{
		res /= i;
	}
	return res;
}

int main()
{
	long long D[21];
	D[1] = 0;
	D[2] = 1;
	for (int i = 3; i <= 20; i++)
	{
		D[i] = (i - 1)*(D[i - 2] + D[i - 1]);
	}
	int M, N, C;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		cin >> N >> M;
		cout << Cpaixu(N, M)*D[M] << endl;
	}
	return 0;
}