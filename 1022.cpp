#include<iostream>
using namespace std;

int search(int *O1, int a)
{
	for (int i = 0; i < 9; i++) {
		if (a == O1[i])
			return i;
	}
}

void train(int num, int *O1, int *O2)
{
	int queue[9];
	int i = 0, j = 0, n = 0;
	cout << "in" << endl;
	queue[0] = O1[0];
	i++;
	j++;
	while (n < num) {
		if (O2[n] == queue[i - 1]) {
			cout << "out" << endl;
			i--;
			n++;
		}
		else {
			cout << "in" << endl;
			queue[i] = O1[j];
			i++;
			j++;
		}
	}
}

int main()
{
	int num;
	int O1[9], O2[9], temp[8];
	long o1, o2;
	while (cin >> num) {
		cin >> o1 >> o2;
		for (int i = num - 1; i >= 0; i--) {
			O1[i] = o1 % 10;
			o1 /= 10;
		}
		for (int i = num - 1; i >= 0; i--) {
			O2[i] = o2 % 10;
			o2 /= 10;
		}
		bool flag = 1;
		for (int i = 0; i < num - 1; i++) {
			int a = search(O1, O2[i]);
			int s = 0;
			for (int j = i + 1; j < num; j++) {
				if (search(O1, O2[j]) < a) {
					temp[j - 1] = search(O1, O2[j]);
					s++;
				}
			}
			for (int n = 0; n < s - 1; n++) {
				if (temp[n] < temp[n + 1]) {
					flag = 0;
					break;
					break;
				}
			}
		}
		if (flag) {
			cout << "Yes." << endl;
			train(num, O1, O2);
		}
		else
			cout << "No." << endl;
		cout << "FINISH" << endl;
		memset(O1, -1, sizeof(O1));
		memset(O2, -1, sizeof(O2));
		memset(temp, -1, sizeof(temp));
	}
	return 0;
}