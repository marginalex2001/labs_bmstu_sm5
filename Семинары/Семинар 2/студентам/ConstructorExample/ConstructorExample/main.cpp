#include <iostream>
#include <string>
#include <locale.h>
#include <clocale>
#include <windows.h>


using namespace std;

class tovar
{

private: //засунул в соответствии с нормами
	char* name = new char[30];
	int col;
	float price;

public:
	tovar() //конструктор без параметров
	{
		cout << "construtor with no parametres called" << endl;
	}

	tovar(char Vname[30], int Vcol, float Vprice)
	{
		copy_n(Vname, 30, name);
		col = Vcol; //конструктор с параметрами
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

	void set_param() // присвоение данных
	{
		fflush(stdin);
		cout << "имя товара: ";
		cin >> name;
		cout << "количество товара: ";
		cin >> col;
		cout << "цена товара: ";
		cin >> price;
	}

	void get_param() // получение данных
	{
		cout << "данные о товаре" << endl;
		cout << "имя: " << name << endl;
		cout << "количество: " << col << endl; //вывод данных
		cout << "цена: " << price << endl;
	}

	~tovar() // деструктор
	{
		cout << "destructor called for " << name << endl;
		delete[] name; // очищаем и удаляем массив
	}
};



int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "конструктор с параметрами: " << endl;
	getchar();
	char name1[] = "Telephone";
	tovar a1(name1, 1500, 321.2);

	cout << "конструктор без параметров/реализация ввода и вывода: " << endl;
	getchar();
	tovar a2;
	a2.set_param();
	a2.get_param();

	cout << "конструктор копирования: " << endl;
	getchar();
	tovar a3(a1); // вызов конструктора копирования
	cout << "деструктор: " << endl;
	getchar();
}