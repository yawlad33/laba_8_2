#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");


	char ch;
	cout << "¬ведите букву: ";
	cin >> ch;

	ch = toupper(ch);
	cout << "Ѕуква в верхнем регистре: " << ch;


	return 0;
}