#include<iostream>
using namespace std;
#include<string>

int main()
{
	string a;
	while (cin >> a)
	{
		char max = a[0];
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		for (int i = 0; i < a.size(); i++)
		{
			cout << a[i];
			if (a[i] == max)
			{
				cout << "(max)";
			}
		}
		cout << endl;
	}
	return 0;
}

//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//	int i;
//	string a;
//	while (cin >> a)
//	{
//		char max = a[0];
//		for (i = 1; i < a.size(); i++)
//			if (max < a[i])
//				max = a[i];
//		for (i = 0; i < a.size(); i++)
//		{
//			cout << a[i];
//			if (a[i] == max)
//				cout << "(max)";
//		}
//		cout << endl;
//	}
//	return 0;
//}
