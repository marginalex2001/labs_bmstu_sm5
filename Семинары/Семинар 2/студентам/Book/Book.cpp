#define _CRT_SECURE_NO_WARNINGS //���������� ������������� ������������ �������
#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;


Book::Book(const char *str) //����������� �� ���������
//Book(const char *str = "") - ����� �������, �������� �� ��������� ��� ������ � ���������
{
	n = strlen(str); //��������� ����� ������
	s = new char[n + 1]; //�������� �����
	//����� ����� ���� ����� � ��������� ������
	strcpy(s, str); //����������� � ����� ������
}
Book::Book(const Book &str) //����������� �����������
{
	n = str.n; //�������� ����� ������
	s = new char[n + 1];
	//����� ����� ���� ����� � ��������� ������
	strcpy(s, str.s); //����������� � ����� ������
}
Book::~Book() //����������
{
	delete[] s; //�.�. ����� ��������� � ������������ ������, �� ������������ �� ��� �������� �������
}

int Book::Length(void) //��������� ����� ������
{
	return n;

}
void Book::Print(void) //����� ������ �� �����
{
	std::cout << s;
}
