#include <iostream>

using namespace std;

int main()
{

	// switch - case - default

	int day;
	cout << "Nhap vao ngay"<<endl;
	cin >> day;
	switch (day)
	{
	default:
		cout << "unknow";
	case 2:
		cout << "Hom nay la thu hai" << endl;
		//break;
	case 3:
		cout << "Hom nay la thu ba" << endl;
		//break;
	case 4:
		cout << "Hom nay la thu tu" << endl;
		//break;
	case 5:
		cout << "Hom nay la thu nam" << endl;
		//break;
	case 6:
		cout << "Hom nay la thu sau" << endl;
		break;
	//default:
		//cout << "unknow";
		//break;
	}
	system("pause");
	return 0;
}