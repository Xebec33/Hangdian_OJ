#include<iostream>
using namespace std;
int main()
{
	int AH, AM, AS, BH, BM, BS;
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> AH >> AM >> AS >> BH >> BM >> BS;
			AS += BS;
			AM += BM;
			AH += BH;
			AM += AS / 60;
			AH += AM / 60;
			AS = AS % 60;
			AM = AM % 60;
			cout << AH << " " << AM << " " << AS << endl;
		}
	}
	return 0;
}
