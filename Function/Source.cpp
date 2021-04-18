#include <iostream>

using namespace std;

// Function

void Print(int n, int a[])
{	
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

int main()
{
	int a[5] = { 0,1,2,3,4 };
	Print();
	system("pause");
	return 0;
}
