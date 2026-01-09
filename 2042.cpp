#include<iostream>
using namespace std;

int main()
{
	int N, a;
	int num = 3;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			num = (num - 1) * 2;
		}
		cout << num << endl;
		num = 3;
	}
	return 0;
}