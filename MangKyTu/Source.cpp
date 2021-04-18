#include <iostream>
#include <string>
using namespace std;

int len(string s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char thanhdz[20];
	char thanhdz2[10] = { 'T','h','a','n','h','\0' };
	char thanhdz3[] = "Thanh";
	string s;
	//cin.get(thanhdz, 19);
	getline(cin,s);
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i];
	}
	/*cout << endl;
	int a = len(thanhdz);
	cout << a;*/
	system("pause");
	return 0;
}