#include<iostream>
using namespace std;

void create(int *lessons, int *tarr)
{
	for (int i = 0; i <= 40; i++) {
		tarr[i] = 0;
	}
	int max = (lessons[0] * lessons[1] <= 40 ? lessons[0] * lessons[1] : 40);
	for (int i = 0; i <= max; i += lessons[0]) {
		tarr[i] = 1;
	}
}

void count(int *tarr, int *arr, int n)
{
	int temp[41];
	memset(temp, 0, sizeof(temp));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i + j <= n) {
				temp[i + j] += tarr[i] * arr[j];
			}		
		}
	}
	for (int i = 0; i <= 40; i++) {
		arr[i] = temp[i];
	}
}

int main()
{
	int T, n, k;
	int lessons[8][2];
	int tarr[41];
	int arr[41];
	cin >> T;
	while (T--) {
		memset(arr, 0, sizeof(arr));
		arr[0] = 1;
		cin >> n >> k;
		for (int i = 0; i < k; i++) {
			cin >> lessons[i][0] >> lessons[i][1];
			create(lessons[i], tarr);
			count(tarr, arr, n);
		}
		cout << arr[n] << endl;
	}
	return 0;
}