#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

float Sqrt(int n)
{
	float result = sqrt((n - 1)*(n - 1) + n * n);
	return result;
}

int main()
{
	int N, x1, y1, x2, y2, group1, group2, place1, place2;
	float len = 0;
	cin >> N;
	if (N > 100 || N <= 0)
		return 0;
	while (N--) {
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0 || x1>100 || y1>100 || x2>100 || y2>100)
			break;
		group1 = x1 + y1 + 1;
		group2 = x2 + y2 + 1;
		place1 = group1 * (group1 - 1) / 2 + x1 + 1;
		place2 = group2 * (group2 - 1) / 2 + x2 + 1;
		len += (fabs(place1 - place2) - fabs(group1 - group2))*sqrt(2);
		int max = (group1 >= group2 ? group1 : group2);
		int min = (group1 >= group2 ? group2 : group1);
		for (int i = min; i < max; i++)
			len += Sqrt(i);
		cout << setprecision(3) << fixed << len << endl;
		len = 0;
	}
	return 0;
}