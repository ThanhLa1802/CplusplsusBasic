#include <iostream>

using namespace std;

int main()
{
 // Mang 2 chieu
	int a[100][100];
	int hang, cot;
	cin >> hang >> cot;
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{

			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}