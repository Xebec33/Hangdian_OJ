#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double triangle(long x1, long y1, long x2, long y2, long x3, long y3)
{
	double s1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	double s2 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	double s3 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	double p = (s1 + s2 + s3) / 2;
	double S = sqrt(p*(p - s1)*(p - s2)*(p - s3));
	return S;
}

int main()
{
	int n;
	long N[200];
	while (cin >> n)
	{
		if (n == 0 || n < 3 || n>100)
			break;
		else
		{
			double S = 0;
			for (int i = 0; i < 2 * n; i++)
			{
				cin >> N[i];
			}
			for (int i = 0; i < 2 * (n - 2); i += 2)
			{
				S += triangle(N[0], N[1], N[i + 2], N[i + 3], N[i + 4], N[i + 5]);
			}
			cout << setprecision(1) << fixed << S << endl;
		}
	}
	return 0;
}