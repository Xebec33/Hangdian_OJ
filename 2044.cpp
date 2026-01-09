#include<iostream>
using namespace std;

int main()
{
	int N, a, b;
	cin >> N;
	long long way[51];
	way[2] = 1;
	way[3] = 2;
	for (int i = 4; i < 51; i++)
	{
		way[i] = way[i - 1] + way[i - 2];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		cout << way[b - a + 1] << endl;
	}
	return 0;
}


//int fibonacci(int b)
//{
//	if (b == 2)
//		return 1;
//	else if (b == 3)
//		return 2;
//	else
//		return fibonacci(b - 1) + fibonacci(b - 2);
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		cout << fibonacci(b - a + 1) << endl;
//	}
//	return 0;
//}
