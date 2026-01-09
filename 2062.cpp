#include<iostream>
using namespace std;

//Num(k) = k*(Num(k-1)+1)
//perGroup(k) = Num(k)/k = Num(k-1)+1 = perGroup(k-1)*(k-1)+1
//Num(1)=1, Num(2)=4
//perGroup(1)=1, perGroup(2)=2

int main()
{
	long long perGroup[21];
	int Group[21];
	perGroup[1] = 1;
	for (int i = 1; i <= 20; i++) {
		Group[i] = i;
		perGroup[i] = perGroup[i - 1] * (i - 1) + 1;
	}
	int n;
	long long m;
	int num;
	cin >> n >> m;
	while (n) {
		while (m) {
			num = (m - 1) / perGroup[n] + 1;
			cout << Group[num] << " ";
			for (int i = num; i <= 19; i++) {
				Group[num] = Group[num + 1];
			}
			m = m - (m - 1) / perGroup[n] * perGroup[n] - 1;
			n--;
		}
		for (int i = 1; i <= 20; i++) {
			Group[i] = i;
		}
		cout << endl;
		cin >> n >> m;
	}
	return 0;
}