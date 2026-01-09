#include<iostream>
using namespace std;

int main()
{
	long long high = 1, low = 0;
	long long newHigh = 0, newLow = 0;
	int n;
	cin >> n;
	while (n != -1) {
		while (n--) {
			newHigh = newHigh + 3 * high + 2 * low;
			newLow = newLow + high + low;
			high = newHigh;
			low = newLow;
			newHigh = 0;
			newLow = 0;
		}
		cout << high << ", " << low << endl;
		high = 1;
		low = 0;
		cin >> n;
	}
	return 0;
}