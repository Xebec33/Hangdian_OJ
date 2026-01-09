#include<iostream>
using namespace std;
#include<cmath>

void time(int h, int m, int s)
{
	double mAngle, hAngle, angle;
	mAngle = double(m * 6) + double(s) / 10;
	hAngle = (12 - double(fabs(h - 12))) * 30 + double(mAngle / 12);
	angle = floor(180 - fabs(fabs(mAngle - hAngle) - 180));
	cout << angle << endl;
}

int main()
{
	int T, h, m, s;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> h >> m >> s;
		time(h, m, s);
	}
	return 0;
}