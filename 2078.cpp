#include<iostream>
using namespace std;

int* bubblesort(int *arr, int n)
{
	for (int i = 1; i < n; i++)	{
		for (int j = 1; j < n - i + 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

int main()
{
	int T, n, m;
	double eff;
	int arr[101];
	cin >> T;
	while (T--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> arr[i + 1];
		}
		bubblesort(arr, n);
		cout << (100 - arr[n])*(100 - arr[n]) << endl;
	}
	return 0;
}