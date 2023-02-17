#include <iostream>
#include <cmath>
#include "Point.h" //����������� ����������� ����� � ����� �������� ������

using namespace std;

//���������� �������, ��������� � ����������

//����� ��� ������ ���������� �
int Point::GetX()
{
	return x;
}

//����� ��� ������ ���������� y
int Point::GetY()
{
	return y;
}

//����� ��� ��������� �������� ���������� �
void Point::SetX(int data)
{
	x = data;
}

//����� ��� ��������� �������� ���������� y
void Point::SetY(int data)
{
	y = data;
}

//������ ��������� ����� � ������� (x,y)
void Point::Print()
{
	cout << '(' << x << ',' << y << ')';
}

//���� � ���������� (� ����������)
bool Point::Read(const char *txt)
{
	if (txt) cout << txt; //��������, ��� ������� ���������
	int x, y;
	char c;
	if (cin >> c && c == '(' && //�������� ����������� ������� �����
		cin >> x &&
		cin >> c && c == ',' &&
		cin >> y &&
		cin >> c && c == ')'
		)
	{
		SetX(x); SetY(y);
		return true;
	}
	if (!cin) cin.clear(); //���� ����� ����� �������, �� ��� ���������
	while (cin.get() != '\n'); //�������� ������� Enter
	return false;
}

//������������� ����������� �� ������� �������
void Point::Move(int dx, int dy)
{
	this->SetX(this->x + dx); //������ ������ ����� ������������
	this->SetY(this->y + dy); //������ ������ ������ ������
}

//���������� ����� ������� (����� ���� ��������!)
double Point::Dist(const Point &other)
{
	return sqrt(pow(static_cast<double>(x - other.x), 2)
		+ pow(static_cast<double>(y - other.y), 2)
		);
}


