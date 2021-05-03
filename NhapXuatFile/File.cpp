#pragma warning(disable : 4996)
#include <iostream>
#include <fstream>
#include <string>
#include <string>
using namespace std;
int main() {
	// khai bao mot file
	fstream new_file;
	new_file.open("input.txt", ios::in);

	if (new_file.is_open())
	{	
		string str;
		while (getline(new_file,str))
		{
			cout << str << endl;
		}
		
		/*string str2;
		getline(new_file, str1);
		getline(new_file, str2);
		cout << str1 << endl << str2 << endl;*/
	}
	new_file.close();
}

