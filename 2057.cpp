#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

int main()
{
	long long A, B;
	while (cin >> hex >> A >> B)
	{
		long long sum = A + B;
		if (sum >= 0)
			cout << setiosflags(ios::uppercase) << hex << sum << endl;
		else
		{
			sum = abs(sum);
			cout << "-" << setiosflags(ios::uppercase) << hex << sum << endl;
		}
	}
	return 0;
}