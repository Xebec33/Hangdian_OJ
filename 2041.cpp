#include<iostream>
using namespace std;

long long f[41];

int superstairs(int M)
{
	if (M == 1 || M == 2)
		return 1;
	if (f[M] == -1)
		f[M] = superstairs(M - 1) + superstairs(M - 2);
	return f[M];
}

int main()
{
	memset(f, -1, sizeof(f));
	f[1] = 1;
	f[2] = 1;
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		cout << superstairs(M) << endl;
	}
	return 0;
}