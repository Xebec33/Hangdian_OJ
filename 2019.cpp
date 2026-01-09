#include<iostream>
using namespace std;

int main()
{
	int arr[100], n, m;
	while (1)
	{
		cin >> n >> m;
		if (n != 0 || m != 0)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[j] <= m && arr[j + 1] >= m)
				{
					for (int p = n - 1; p >= j + 1; p--)
					{
						arr[p + 1] = arr[p];
					}
					arr[j + 1] = m;
					break;
				}
			}
			for (int q = 0; q <= n; q++)
			{
				cout << arr[q] << " ";
			}
		}
		else
			break;
	}
	
}