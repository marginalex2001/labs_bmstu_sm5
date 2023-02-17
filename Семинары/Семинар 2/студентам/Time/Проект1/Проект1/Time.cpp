#include <iostream>
#include <cmath>
#include "Time.h" //����������� ����������� ����� � ����� �������� ������
	

Time::Time() : h(0), m(0) //����������� �� �����.
{
	cout << "����������� �� ���������: "; Print(); cout << endl;
}
Time::Time(int H): h(H), m(0) //����������� �������������� (������. � 1 ����������)
{
	cout << "����������� �������������� (1 ��������): "; Print(); cout << endl;
}
Time::Time(int H, int M) : h(H), m(M) //����������� � 2 �����������
{
	cout << "����������� c 2 �����������: "; Print(); cout << endl;
}
Time::Time(const Time & other) : h(other.h), m(other.m) //����������� �����������
{
	cout << "����������� �����������: "; Print(); cout << endl;
}
Time::~Time() //����������
{
	cout << "����������: "; Print(); cout << endl;
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
		cout << "�����:" << h << ':' << m << endl;
	}
void Time::Move(int dH, int dM)
{
	int temp;
	m += dM;
	temp = m / 60; //���-�� ���. �����
	m = m % 60; //���� ������������
	if (m < 0) m += 60; //���� ���. ��������
	h += dH + temp;
	h = h % 24;
	if (h < 0) h += 24;
}