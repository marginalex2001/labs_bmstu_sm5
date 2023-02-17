#define _CRT_SECURE_NO_WARNINGS //Разрешение использование небезопасных функций
#include <iostream>
#include <cstring>
#include "Book.h"
using namespace std;


Book::Book(const char *str) //конструктор по умолчанию
//Book(const char *str = "") - будет ошибкой, параметр по умолчанию уже указан в прототипе
{
	n = strlen(str); //вычислили длину строки
	s = new char[n + 1]; //выделили буфер
	//здесь может быть отказ в выделении памяти
	strcpy(s, str); //скопировали в буфер строку
}
Book::Book(const Book &str) //конструктор копирования
{
	n = str.n; //извлекли длину строки
	s = new char[n + 1];
	//здесь может быть отказ в выделении памяти
	strcpy(s, str.s); //скопировали в буфер строку
}
Book::~Book() //деструктор
{
	delete[] s; //т.к. буфер выделялся в динамической памяти, то освобождение ее при удалении объекта
}

int Book::Length(void) //получение длины строки
{
	return n;

}
void Book::Print(void) //вывод строки на экран
{
	std::cout << s;
}
