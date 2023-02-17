#include <iostream>
#include <cmath>
#include "Time.h" //подключение заговочного файла в файле описани€ класса
	

Time::Time() : h(0), m(0) //конструктор по умолч.
{
	cout << " онструктор по умолчанию: "; Print(); cout << endl;
}
Time::Time(int H): h(H), m(0) //конструктор преобразовани€ (констр. с 1 аргументом)
{
	cout << " онструктор преобразовани€ (1 аргумент): "; Print(); cout << endl;
}
Time::Time(int H, int M) : h(H), m(M) //конструктор с 2 аргументами
{
	cout << " онструктор c 2 аргументами: "; Print(); cout << endl;
}
Time::Time(const Time & other) : h(other.h), m(other.m) //конструктор копировани€
{
	cout << " онструктор копировани€: "; Print(); cout << endl;
}
Time::~Time() //деструктор
{
	cout << "ƒеструктор: "; Print(); cout << endl;
}
void Time::SetH(int H)
{
	if (H < 0) h = 0;
	else if (H > 23) h = 23;
	else h = H;
}
void Time::SetM(int M)
{
	if (M < 0) m = 0;
	else if (M > 59) m = 59;
	else m = M;
}

int Time::GetH()
{
	return h;
}
int Time::GetM()
{
	return m;
}
void Time::Print()
	{
		cout << "¬рем€:" << h << ':' << m << endl;
	}
void Time::Move(int dH, int dM)
{
	int temp;
	m += dM;
	temp = m / 60; //кол-во доп. часов
	m = m % 60; //учет переполнени€
	if (m < 0) m += 60; //учет отр. значени€
	h += dH + temp;
	h = h % 24;
	if (h < 0) h += 24;
}