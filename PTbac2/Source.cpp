#include <iostream>

using namespace std;

int main()
{

	int a, b, c;
	cout << "Nhap vao he so a, b,c:" << endl;
	cin >> a >> b >> c;
	
	if (a == 0 && b == 0 && c != 0)
	{
		cout << " PT vo nghiem"<<endl;
	}
	else if (a == 0 && b != 0 && c != 0)
	{
		cout << "PT co nghiem duy nhat x = " << (float)(-c) / b<<endl;
	}
	else if (a == 0 && b == 0 && c == 0)
	{
		cout << "PT co vo so nghiem" << endl;
	}
	else
	{
		float delta = b*b - 4*a*c;
		if (delta > 0)
		{
			cout << "PT co 2 nghiem phan biet:" << endl;
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) <<endl;
			cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else if (delta == 0)
		{
			cout << "PT co nghiem kep:" << endl;
			cout << " x =  " << (-b / (2 * a));
		}
		else
		{
			cout << "PT vo nghiem" << endl;
		}

	}
	system("pause");
	return 0;
}