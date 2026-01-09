#include<iostream>
using namespace std;

int* create(int value, int num, int *arr1)
{
	int max = value * num < 50 ? value * num : 50;
	for (int i = 0; i <= max; i += value) {
		arr1[i] = 1;
	}
	return arr1;
}

void calculate(int *arr1, int *arr2)
{
	int temp[51];
	memset(temp, 0, sizeof(temp));
	for (int i = 0; i <= 50; i++)
		for (int j = 0; j <= 50; j++)
			if (i + j <= 50)
				temp[i + j] += arr1[i] * arr2[j];
	for (int i = 0; i <= 50; i++)
		arr2[i] = temp[i];
	cout << endl;
}

int main()
{
	int N, sum = 0;
	int num[27], arr1[51], arr2[51];
	memset(arr1, 0, sizeof(arr1));
	arr1[0] = 1;
	memset(arr2, 0, sizeof(arr2));
	arr2[0] = 1;
	cin >> N;
	while (N--) {
		for (int i = 1; i <= 26; i++) {
			cin >> num[i];
		}
		for (int i = 1; i <= 26; i++) {
			calculate(create(i, num[i], arr1), arr2);
			memset(arr1, 0, sizeof(arr1));
		}
		for (int i = 0; i <= 50; i++) {
			sum += arr2[i];
		}
		sum -= 1;
		cout << sum << endl;
		memset(arr2, 0, sizeof(arr2));
		arr2[0] = 1;
		sum = 0;
	}
	return 0;
}