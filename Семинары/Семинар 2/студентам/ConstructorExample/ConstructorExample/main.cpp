#include <iostream>
#include <string>
#include <locale.h>
#include <clocale>
#include <windows.h>


using namespace std;

class tovar
{

private: //������� � ������������ � �������
	char* name = new char[30];
	int col;
	float price;

public:
	tovar() //����������� ��� ����������
	{
		cout << "construtor with no parametres called" << endl;
	}

	tovar(char Vname[30], int Vcol, float Vprice)
	{
		copy_n(Vname, 30, name);
		col = Vcol; //����������� � �����������
		price = Vprice;
		cout << "constructor with parametres called for " << name << endl;
	}

	tovar(tovar& obj)
	{
		col = obj.col;
		price = obj.price;
		copy_n(obj.name, 30, name);
		cout << "constructor copy called for " << name << endl;
	}

	void set_param() // ���������� ������
	{
		fflush(stdin);
		cout << "��� ������: ";
		cin >> name;
		cout << "���������� ������: ";
		cin >> col;
		cout << "���� ������: ";
		cin >> price;
	}

	void get_param() // ��������� ������
	{
		cout << "������ � ������" << endl;
		cout << "���: " << name << endl;
		cout << "����������: " << col << endl; //����� ������
		cout << "����: " << price << endl;
	}

	~tovar() // ����������
	{
		cout << "destructor called for " << name << endl;
		delete[] name; // ������� � ������� ������
	}
};



int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "����������� � �����������: " << endl;
	getchar();
	char name1[] = "Telephone";
	tovar a1(name1, 1500, 321.2);

	cout << "����������� ��� ����������/���������� ����� � ������: " << endl;
	getchar();
	tovar a2;
	a2.set_param();
	a2.get_param();

	cout << "����������� �����������: " << endl;
	getchar();
	tovar a3(a1); // ����� ������������ �����������
	cout << "����������: " << endl;
	getchar();
}