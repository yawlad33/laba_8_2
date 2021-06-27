#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");


	char ch;
	cout << "Введите букву: ";
	cin >> ch;

	ch = toupper(ch);
	cout << "Буква в верхнем регистре: " << ch;


	return 0;
}
