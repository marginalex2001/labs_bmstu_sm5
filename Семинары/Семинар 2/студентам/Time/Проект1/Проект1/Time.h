#ifndef POINT_H //защита от повторного подключения файла
#define POINT_H
class Time
{
private:
	int h, m; //час, время
public:
	
	Time(); //конструктор по умолч.
	Time(int); //конструктор преобразования (констр. с 1 аргументом)
	Time(int, int); //конструктор с 2 аргументами
	Time(const Time &); //конструктор копирования
	~Time(); //деструктор

	void SetH(int);
	void SetM(int);
	int GetH();
	int GetM();
	void Print();
	void Move(int, int);
};

#endif