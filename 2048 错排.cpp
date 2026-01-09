#include<iostream>
#include<iomanip>
using namespace std;

double A(int n)
{
	double jiecheng = 1;
	for (int i = 2; i <= n; i++)
	{
		jiecheng *= i;
	}
	return jiecheng;
}

int main()
{
	double D[21];
	D[1] = 0;
	D[2] = 1;
	for (int i = 3; i <= 20; i++)
	{
		D[i] = (i - 1)*(D[i - 2] + D[i - 1]);
	}
	int C;
	int n;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		cin >> n;
		cout << setprecision(2) << fixed << D[n] / A(n) * 100 << "%" << endl;
	}
	return 0;
}