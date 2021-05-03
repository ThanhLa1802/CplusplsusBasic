#include <iostream>

using namespace std;

int main()
{
	
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
			continue;

		cout << i << endl;

		//if (i > 4)
			//break;

	}
	system("pause");
	return 0;
}