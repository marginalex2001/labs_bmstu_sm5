#include <iostream>
#include <string> // ��� ������ �� ��������
#include <iomanip>
#include "kadr.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "C");

	kadr a; //����������� �� ���������
	cout << "numer = \""; (a).Print(); \
		cout << "\", razrad = " << (a).razrad() << endl;
	kadr b = "kkk"; //����������� � ���������������� ���������
	cout << "numer = 1\""; (b).Print(); \
		cout << "\", razrad = 2" << (b).razrad() << endl;
	Book *p = new Book("bbb");
	cout << "numer = 2\""; (*p).Print(); \
		cout << "\", razrad = 3" << (*p).razrad() << endl;
	delete p;
	kadr c = b; //����������� �����������
	cout << "numer = \""; (c).Print(); \
		cout << "\", razrad = " << (c).razrad() << endl;

	system("pause");
	return 0;
}