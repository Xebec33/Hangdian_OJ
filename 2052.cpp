#include<iostream>
using namespace std;

int main()
{
	int w, h;
	while (cin >> w >> h)
	{
		for (int i = 0; i < h + 2; i++)
		{
			if (i == 0||i == h + 1)
			{
				cout << "+";
				for (int j = 0; j < w; j++)
				{
					cout << "-";
				}
				cout << "+" << endl;
			}
			else
			{
				cout << "|";
				for (int j = 0; j < w; j++)
				{
					cout << " ";
				}
				cout << "|" << endl;
			}			
		}
	}
	
}