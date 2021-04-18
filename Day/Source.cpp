#include <iostream>

using namespace std;

int main()
{

	// Nhap vao 3 so in ra so lon nhat va nho nhat
	int a, b, c;
	cout << "Nhap vao 3 so a, b, c:" << endl;
	cin >> a >> b >> c;
	int min = a;
	if (b <= min)
	{
		min = b;
	}
	if (c <= min)
	{
		min = c;
	}
	cout << " Gia tri nho nhat la: " << min << endl;
	system("pause");
	return 0;
}