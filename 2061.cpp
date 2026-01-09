#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	int n, m;
	double numerator = 0, denominator = 0;
	double C, S;
	bool flag = 0;
	char name[31];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> name >> C >> S;
			numerator += C * S;
			denominator += C;
			if (S < 60)
				flag = 1;
		}
		if (flag)
			cout << "Sorry!" << endl;
		else
			cout << setprecision(2) << fixed << numerator / denominator << endl;
		if (n != 0)
			cout << endl;
	}
	return 0;
}