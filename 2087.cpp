#include<iostream>
using namespace std;

int Cut(char* strS, char* strP)
{
	int num = 0;
	int lenP = strlen(strP);
	int lenS = strlen(strS);
	int f[1000];
	f[0] = -1;
	for (int j = 1; j < lenP; j++) {
		int i = f[j - 1];
		while (strP[j] != strP[i + 1] && i >= 0)
			i = f[i];
		if (strP[j] == strP[i + 1])
			f[j] = i + 1;
		else
			f[j] = -1;
	}

	int posS = 0, posP = 0;
	while (posS < lenS) {
		while (posS < lenS && posP < lenP) {
			if (strS[posS] == strP[posP]) {
				posS++;
				posP++;
			}
			else {
				if (posP == 0)
					posS++;
				else
					posP = f[posP - 1] + 1;
			}
		}
		if (posP < lenP)
			return num;
		else {
			num++;
			posP = 0;
		}
	}
	return num;
}

int main()
{
	char* given = new char[1000];
	char* example = new char[1000];
	while (1) {
		cin >> given;
		if (strcmp(given,"#") == 0)
			break;
		cin >> example;
		if (strcmp(example, "#") == 0)
			break;
		cout << Cut(given, example) << endl;
	}
	return 0;
}