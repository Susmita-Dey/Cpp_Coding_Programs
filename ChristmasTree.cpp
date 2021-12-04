/* Creating Christmas Tree Using Stars */

#include <iostream>
using namespace std;

void ChristmasTreePattern(int width, int height)
{
	cout << "\n\n\t\tMERRY CHRISTMAS\n\n";
	int space = width * height;
	int i, j, k, n = 1;

	for (int x = 1; x <= height; x++)
	{
		for (i = n; i <= width; i++)
		{
			for (j = space; j >= i; j--)
			{
				cout << " ";
			}
			for (k = 1; k <= i; k++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
		n = n + 2;
		width = width + 2;
	}
	for (i = 1; i <= height - 1; i++)
	{
		for (j = space - 3; j >= 0; j--)
		{
			cout << " ";
		}
		for (k = 1; k <= height - 1; k++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}

int main()
{
	int width, height;
	cout << "Enter Christmas Tree Width & Height = ";
	cin >> width >> height;

	ChristmasTreePattern(width, height);
	cout << "\n";
	return 0;
}
