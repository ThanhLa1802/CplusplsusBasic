#include <iostream>

using namespace std;

int main()
{
	int nhap;
	do {
		cout << "Nhan phim 1 de nhap ten" << endl;
		cout << "Nhan phim 2 de nhap tuoi" << endl;
		cout << "Nhan phim 3 de nhap que quan" << endl;
		cin >> nhap;
		// do somthing 
		if (nhap == 1)
		{
			cout << "Hay nhap ten cua ban" << endl;
		}

	} 
	while (1 <= nhap && nhap <= 3);

	system("pause");
	return 0;
}