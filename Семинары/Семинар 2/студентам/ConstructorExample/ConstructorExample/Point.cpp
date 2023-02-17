#include <iostream>
#include <cmath>
#include "Point.h" //подключение заговочного файла в файле описания класса

using namespace std;

//Реализация методов, описанных в интерфейсе

//КОНСТРУКТОРЫ
Point::Point() : x(0), y(0)  //список инициализации
{
	//можно инициализировать x и y, чем вызов функции Set, но так делать не рекомендуется!
	//SetX(0);
	//SetY(0);

	//для отладки
	cout << "Конструктор по умолчанию:" << endl;
	cout << "Point(): "; Print(); cout << endl;
}
 Point::Point(int x) : x(x), y(0)  //список инициализации
{
	//можно инициализировать x и y, чем вызов функции Set, но так делать не рекомендуется!
	//SetX(x);
	//SetY(0);

	//для отладки
	cout << "Конструктор с 1 аргументом: ";
	cout << "Point(int): "; Print(); cout << endl;
}

Point::Point(int x, int y) : x(x), y(y)  //список инициализации
{
	//можно инициализировать x и y, чем вызов функции Set, но так делать не рекомендуется!
	//SetX(x);
	//SetY(y);

	//для отладки
	cout << "Конструктор с 2 аргументами: ";
	cout << "Point(int,int): "; Print(); cout << endl;
}
Point::Point(const Point &other)
: x(other.x), y(other.y) //список инициализации
{
	//для отладки
	cout << "Конструктор копирования: ";
	cout << "Point(const Point &): "; Print(); cout << endl;
}

// ДЕСТРУКТОР
Point::~Point()
{
	//для отладки
	cout << "Деструктор: ";
	cout << "~Point(): "; Print(); cout << endl;
}

//метод для чтения компонента х
int Point::GetX()
{
	return x;
}

//метод для чтения компонента y
int Point::GetY()
{
	return y;
}

//метод для установки значения компонента х
void Point::SetX(int data)
{
	x = data >= 0 ? data : 0;
}

//метод для установки значения компонента y
void Point::SetY(int data)
{
	y = data >= 0 ? data : 0;
}

//печать координат точки в формате (x,y)
void Point::Print()
{
	cout << '(' << x << ',' << y << ')';
}

//ввод с клавиатуры (с подсказкой)
bool Point::Read(const char *txt)
{
	if (txt) cout << txt; //проверка, что передан указатель
	int x, y;
	char c;
	if (cin >> c && c == '(' && //проверка правильного формата ввода
		cin >> x &&
		cin >> c && c == ',' &&
		cin >> y &&
		cin >> c && c == ')'
		)
	{
		SetX(x); SetY(y);
		return true;
	}
	if (!cin) cin.clear(); //если поток имеет символы, то они очищаются
	while (cin.get() != '\n'); //ожидание нажатия Enter
	return false;
}

//относительное перемещение от текущей позиции
void Point::Move(int dx, int dy)
{
	this->SetX(this->x + dx); //методы класса могут использовать
	this->SetY(this->y + dy); //другие методы своего класса
}

//расстояние между точками (имеет один аргумент!)
double Point::Dist(const Point &other)
{
	return sqrt(pow(static_cast<double>(x - other.x), 2)
		+ pow(static_cast<double>(y - other.y), 2)
		);
}


