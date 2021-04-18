#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	cin >> x;

	//cout << "Lap phuong cua x la:" << endl << pow(x, 5)<<endl;
	//cout << " Can bac 2 cua x:" << endl << sqrt(x);

	double result = exp(x);


	cout << result << endl;
	// e = 2.71828
	cout << pow(2.71828, 6) << endl;
	system("pause");
	return 0;
}
