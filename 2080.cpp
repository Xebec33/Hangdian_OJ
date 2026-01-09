#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

#define pi 3.14159

double length(double x1, double y1, double x2, double y2)
{
	double length = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return length;
}

int main()
{
	int T;
	double x1, y1, x2, y2, len1, len2, len3, cosin, angle;
	cin >> T;
	while (T--) {
		cin >> x1 >> y1 >> x2 >> y2;
		len1 = length(x1, y1, 0, 0);
		len2 = length(x2, y2, 0, 0);
		len3 = length(x1, y1, x2, y2);
		cosin = (len1*len1 + len2 * len2 - len3 * len3) / 2 / len1 / len2;
		if (cosin > 1)
			cosin = 1;
		if (cosin < -1)
			cosin = -1;
		angle = acos(cosin) / pi * 180;
		cout << setprecision(2) << fixed << angle << endl;
	}
	return 0;
}