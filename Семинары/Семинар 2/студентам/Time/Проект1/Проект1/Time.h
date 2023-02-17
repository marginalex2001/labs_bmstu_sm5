#ifndef POINT_H //������ �� ���������� ����������� �����
#define POINT_H
class Time
{
private:
	int h, m; //���, �����
public:
	
	Time(); //����������� �� �����.
	Time(int); //����������� �������������� (������. � 1 ����������)
	Time(int, int); //����������� � 2 �����������
	Time(const Time &); //����������� �����������
	~Time(); //����������

	void SetH(int);
	void SetM(int);
	int GetH();
	int GetM();
	void Print();
	void Move(int, int);
};

#endif