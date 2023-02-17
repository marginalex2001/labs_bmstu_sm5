#include <iostream>
#include <cmath>
#include "Point.h" //подключение заговочного файла в файле описани€ класса

using namespace std;

//–еализаци€ методов, описанных в интерфейсе

//метод дл€ чтени€ компонента х
int Point::GetX()
{
	return x;
}

//метод дл€ чтени€ компонента y
int Point::GetY()
{
	return y;
}

//метод дл€ установки значени€ компонента х
void Point::SetX(int data)
{
	x = data;
}

//метод дл€ установки значени€ компонента y
void Point::SetY(int data)
{
	y = data;
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
	if (!cin) cin.clear(); //если поток имеет символы, то они очищаютс€
	while (cin.get() != '\n'); //ожидание нажати€ Enter
	return false;
}

//относительное перемещение от текущей позиции
void Point::Move(int dx, int dy)
{
	this->SetX(this->x + dx); //методы класса могут использовать
	this->SetY(this->y + dy); //другие методы своего класса
}

//рассто€ние между точками (имеет один аргумент!)
double Point::Dist(const Point &other)
{
	return sqrt(pow(static_cast<double>(x - other.x), 2)
		+ pow(static_cast<double>(y - other.y), 2)
		);
}


