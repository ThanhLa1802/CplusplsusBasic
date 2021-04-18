#pragma warning(disable : 4996)
#include <iostream>
// recursion
using namespace std;

void Print(int n)
{
	cout << "Thanh dep trai! " << n << endl;
	if (n == 0)
		return;
	Print(n - 1);
	

}
// tinh giai thua 6 = 6.5.4.3.2.1;

int TinhGiaiThua(int n)
{
	if (n == 0)
		return 1;
	return TinhGiaiThua(n - 1) * n;

}

int main()
{
	
	//Print(6);
	int n;
	cout << "Moi ban nhap so:" << endl;
	cin >> n;
	cout << "Giai thua " << n << "la: " << endl;
	int res = TinhGiaiThua(n);
	cout << res <<endl;
	system("pause");
	return 0;
	

}