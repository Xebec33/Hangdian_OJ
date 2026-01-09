#include<iostream>
using namespace std;

int main()
{
	int n, m, N[100], M[100];	
	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				cin >> N[i];
			}
			for (int i = 0; i < m; i++)
			{
				cin >> M[i];
			}
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (N[j] > N[j + 1])
					{
						int temp = N[j + 1];
						N[j + 1] = N[j];
						N[j] = temp;
					}
				}
			}
			int A[100], counter = 0;
			for (int i = 0; i < n; i++)
			{
				bool flag = true;
				for (int j = 0; j < m; j++)
				{
					if (N[i] == M[j])
						flag = false;
				}
				if (flag)
				{
					A[counter] = N[i];
					counter++;
				}
			}
			if (counter == 0)
			{
				cout << "NULL" << endl;
			}
			else
			{
				for (int i = 0; i < counter - 1; i++)
				{
					cout << A[i] << " ";
				}
				cout << A[counter - 1] << endl;
			}			
		}		
	}
	return 0;
}