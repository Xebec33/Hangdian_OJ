#include<iostream>
using namespace std;

int main()
{
	int n, counter = 0;
	while (cin >> n) {
		for (int i = 0; i <= n / 50; i++) {
			for (int j = 0; j <= (n - i * 50) / 25; j++) {
				for (int x = 0; x <= (n - i * 50 - j * 25) / 10; x++) {
					for (int y = 0; y <= (n - i * 50 - j * 25 - x * 10) / 5; y++) {
						if (i + j + x + y + n - 50 * i - 25 * j - 10 * x - 5 * y <= 100)
							counter++;
					}
				}
			}
		}
		cout << counter << endl;
		counter = 0;
	}
	return 0;
}