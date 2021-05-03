#pragma warning(disable : 4996)
#include <iostream>
#include <io.h> //_setmode()
#include <fcntl.h> ///_O_WTEXT
#include <fstream>
#include <string>
#include <locale>
#include <codecvt>

using namespace std;
int main()
{
	_setmode(_fileno(stdout), _O_WTEXT); //needed for output
	_setmode(_fileno(stdin), _O_WTEXT); //needed for input
	
	wcout << L"Chương trình đọc xuất file tiếng Việt!" << endl;

	//init
	wstring user_name;
	int age;
	
	wcout << L"Nhập vào tên của bạn:" << endl;
	getline(wcin, user_name);
	wcout << L"Nhập vào tuổi của bạn:" << endl;
	wcin >> age;

	//save file UTF 8
	locale loc(std::locale(), new std::codecvt_utf8<wchar_t>);  // UTF-8
	wofstream fout(L"userinfo.txt");
	if (!fout) {
		wcout << L"Không thể tạo file userinfo.txt\n";
	}
	else {
		fout.imbue(loc);
		fout << user_name << L"\n" << L"\n" << age << L"\n";
		fout.close();
	}

	//read file
	wifstream fin(L"userinfo.txt");
	if (!fin) {
		std::wcout << L"Không thể đọc file userinfo\n";
	}
	else {
		fin.imbue(loc);
		getline(fin, user_name);
		fin >> age;
		wcout << L"Họ tên: " << user_name << L"\nTuổi: " << age << L"\n\n";
		fin.close();
	}
	wcout << L"Chương trình kết thúc.\n";
	return 0;
}