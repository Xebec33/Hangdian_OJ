#include<iostream>
using namespace std;

int main()
{
	long long RPG[51];
	RPG[1] = 3;
	RPG[2] = 6;
	RPG[3] = 6;
	for (int i = 4; i <= 50; i++)
	{
		RPG[i] = RPG[i - 2] * 2 + RPG[i - 1];
	}
	int n;
	while (cin >> n)
	{
		cout << RPG[n] << endl;
	}
	return 0;
}