//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//	int n, b = 1;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string a;
//		cin >> a;
//		for (int j = 0; j < a.size() / 2; j++)
//		{
//			if (a[j] != a[a.size() - 1 - j])
//			{
//				b = 0;
//			}
//		}
//		if (b == 1)
//		{
//			cout << "yes" << endl;
//		}
//		else
//			cout << "no" << endl;
//	}
//	
//	return 0;
//}
//




#include<iostream>
using namespace std;
#include<string>

int main()
{
	int n, b[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		for (int j = 0; j < a.size() / 2; j++)
		{
			if (a[j] != a[a.size() - 1 - j])
			{
				b[i] = 1;
			}
		}		
	}
	for (int i = 0; i < n; i++)
	{
		if (b[i] == 1)
		{
			cout << "no" << endl;
		}
		else
			cout << "yes" << endl;
	}
	return 0;
}