#include <iostream>
#include <cmath>
#include "Point.h" //����������� ����������� ����� � ����� �������� ������

using namespace std;

//���������� �������, ��������� � ����������

//������������
Point::Point() : x(0), y(0)  //������ �������������
{
	//����� ���������������� x � y, ��� ����� ������� Set, �� ��� ������ �� �������������!
	//SetX(0);
	//SetY(0);

	//��� �������
	cout << "����������� �� ���������:" << endl;
	cout << "Point(): "; Print(); cout << endl;
}
 Point::Point(int x) : x(x), y(0)  //������ �������������
{
	//����� ���������������� x � y, ��� ����� ������� Set, �� ��� ������ �� �������������!
	//SetX(x);
	//SetY(0);

	//��� �������
	cout << "����������� � 1 ����������: ";
	cout << "Point(int): "; Print(); cout << endl;
}

Point::Point(int x, int y) : x(x), y(y)  //������ �������������
{
	//����� ���������������� x � y, ��� ����� ������� Set, �� ��� ������ �� �������������!
	//SetX(x);
	//SetY(y);

	//��� �������
	cout << "����������� � 2 �����������: ";
	cout << "Point(int,int): "; Print(); cout << endl;
}
Point::Point(const Point &other)
: x(other.x), y(other.y) //������ �������������
{
	//��� �������
	cout << "����������� �����������: ";
	cout << "Point(const Point &): "; Print(); cout << endl;
}

// ����������
Point::~Point()
{
	//��� �������
	cout << "����������: ";
	cout << "~Point(): "; Print(); cout << endl;
}

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
	x = data >= 0 ? data : 0;
}

//����� ��� ��������� �������� ���������� y
void Point::SetY(int data)
{
	y = data >= 0 ? data : 0;
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


