#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");


	char ch;
	cout << "������� �����: ";
	cin >> ch;

	ch = toupper(ch);
	cout << "����� � ������� ��������: " << ch;


	return 0;
}