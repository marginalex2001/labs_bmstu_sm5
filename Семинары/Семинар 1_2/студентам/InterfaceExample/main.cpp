#include <iostream>
#include "Point.h" //����������� ����������� ����� � ����� ������������� ������

using namespace std;

//���������� ������� ��� ��������� ���������� ����� �������
//� ������ �� ���������, ������� ����������� ��������
double gdist(Point &a, Point &b) //�������� �� ������
{ //���������� Get...() ��� ������� � x � y
	return sqrt(pow(static_cast<double>(a.GetX() - b.GetX()), 2)
		+ pow(static_cast<double>(a.GetY() - b.GetY()), 2));
}

//������� �������
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "C");

	Point a; //�������� ���������� ������ Point � �����
	// a.x = 6; //ERROR, �.�. x �������� private
	// a.y = 8; //ERROR, �.�. y �������� private
	a.SetX(6);
	a.SetY(8);
	cout << "����� A: " << a.GetX() << ',' << a.GetY() << endl;
	Point *p = new Point; //�������� ���������� ������ Point � ������������ ������ (����)
	p->SetX(9);
	p->SetY(12);
	cout << "����� P: " << p->GetX() << ',' << p->GetY() << endl;
	cout << "���������� �� ����� A �� ����� �: " << gdist(a, *p) //������������, �.�. ��������� Point
		<< endl;

	cout << "������ ������������� ������������ ����������" << endl;

	a.Move(-10, 4); // �������� ���������� �����
	cout << "���������� ����� A ����� ������ �� ��� X �� -10, �� ��� Y �� +4: ";
	a.Print();
	cout << endl;
	if (p->Read("������� ���������� ����� � ������� (x,y) ")) // ���� ��������� �����
	{
		cout << "���������� ��  "; a.Print(); // ����� ��������� �����
		cout << " �� "; p->Print();
		cout << " ����� " << p->Dist(a) << endl; //��� a.Dist(*p) //���������� ���������� � ������� ������
	}
	delete p; //�������� �� ���� (������ ��������!)

	system("pause");
	return 0;
}