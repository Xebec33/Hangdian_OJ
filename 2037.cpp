#include<iostream>
using namespace std;

int main()
{
	int n, counter = 1;
	int S[100], E[100];
	while (cin >> n)
	{
		if (n == 0)
			break;
		else
		{
			for (int i = 0; i < n; i++)
			{
				cin >> S[i] >> E[i];
			}
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (E[j] > E[j + 1])
					{
						int temp1 = E[j + 1];
						E[j + 1] = E[j];
						E[j] = temp1;
						int temp2 = S[j + 1];
						S[j + 1] = S[j];
						S[j] = temp2;
					}
				}
			}
			int curr = 0;
			while (1)
			{
				for (int i = curr + 1; i < n; i++)
				{
					if (E[curr] <= S[i])
					{
						curr = i;
						counter++;
						break;
					}
				}
				if (E[curr] > S[n - 1])
				{
					break;
				}
			}
			cout << counter << endl;
		}
	}
	return 0;
}