#include <iostream>

using namespace std;

int main()
{
	int count = 1;
	int sum = 0;
	while (count <= 10)
	{
		sum = sum + count;
		count++;
	}
	cout << " Tong cac so tu 1 ->10 la:" << sum << endl;

	system("pause");
	return 0;
}