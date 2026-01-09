#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int N, M, maxlen, t;
	while (cin >> N >> M)
	{
		if (N == 0 && M == 0)
			break;
		maxlen = sqrt(M * 2);
		for (int i = maxlen; i >= 1; i--)
		{
			t = M - i * (i - 1) / 2;
			if (t%i == 0)
				cout << "[" << t / i << "," << t / i + i - 1 << "]" << endl;
		}
		cout << endl;
	}
	return 0;
}