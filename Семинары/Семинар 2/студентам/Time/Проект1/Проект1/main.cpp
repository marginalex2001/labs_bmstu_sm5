#include <iostream>
#include <string> // ��� ������ �� ��������
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// ����� � ����� stdout ��������
	cout << "����� ������������� ���������: " << 42 << endl;
	cout << "����� ��������� ���� float: " << 1.2f << endl;
	cout << "����� ��������� ���� double: " << 2.45 << endl;
	cout << "����� ���������� �������: " << '#' << endl;
	cout << "����� ����������� ������: " << "������:)" << endl;
	cout << endl;

	int i = 1;
	double d = 12.2;
	float f = 2.4f;
	char c = '~';
	string s = "xHello, world!";

	// ����� � ����� stdout ����������
	cout << "����� ������������� ���������: " << i << endl;
	cout << "����� ���������� ���� float: " << d << endl;
	cout << "����� ���������� ���� double: " << f << endl;
	cout << "����� ���������� �������: " << c << endl;
	cout << "����� ������: " << s << endl;
	cout << endl;

	// ����� � ����� stdout ��������� �������
	const int length = 3;
	float array[length] = { 1.123, -2.234, 3.345 };
	for (int i = 0; i < length; i++)
	{
		cout << setw(10) << array[i]; // ���������� ������ ���� ������
	}

	cout << '\n';

	for (int i = 0; i < length; i++)
	{
		cout << setprecision(6) << fixed << showpos << array[i] << ' '; //  ���������� ���-�� ������ ����� ������� � ������ + ��� �����. �����
	}

	// ����� �������� �������� � ������ �������� ���������
	// noshowpos - ������ ������ + ����� �������������� �������
	cout << endl << noshowpos << "\n10: " << 15 << "\n16: " << hex << 15 << "\n8: " << oct << 15 << "\n10: " << dec << 15 << endl;
	cout << "\n10: " << 070 << "\n16: " << hex << 070 << "\n8: " << oct << 070 << "\n10: " << dec << 070 << endl;
	cout << "\n10: " << 0xA4 << "\n16: " << hex << 0xA4 << "\n8: " << oct << 0xA4 << "\n10: " << dec << 0xA4 << endl;

	return 0;
}