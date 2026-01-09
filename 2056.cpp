#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double S;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		if (x1 > x2)
		{
			swap(x1, x2);
			swap(y1, y2);
		}
		if (x3 > x4)
		{
			swap(x3, x4);
			swap(y3, y4);
		}
		if (y1 > y2)
			swap(y1, y2);
		if (y3 > y4)
			swap(y3, y4);
		if (x1 > x3)
		{
			swap(x1, x3);
			swap(y1, y3);
			swap(x2, x4);
			swap(y2, y4);
		}
		if (x3 >= x2 || y3 >= y2)
			S = 0;
		else
		{
			if (y3 >= y1)
			{
				if (x4 <= x2 && y4 <= y2)
					S = (x4 - x3)*(y4 - y3);
				if (x4 > x2 && y4 > y2)
					S = (x2 - x3)*(y2 - y3);
				if (x4 > x2 && y4 <= y2)
					S = (x2 - x3)*(y4 - y3);
				if (x4 <= x2 && y4 > y2)
					S = (x4 - x3)*(y2 - y3);
			}
			else
			{
				if (y4 <= y1)
					S = 0;
				else if (x4 <= x2)
				{
					if (y4 <= y2)
						S = (x4 - x3)*(y4 - y1);
					else
						S = (x4 - x3)*(y2 - y1);
				}
				else
				{
					if (y4 <= y2)
						S = (x2 - x3)*(y4 - y1);
					else
						S = (x2 - x3)*(y2 - y1);
				}
			}
		}
		cout << setprecision(2) << fixed << S << endl;
	}
	return 0;
}