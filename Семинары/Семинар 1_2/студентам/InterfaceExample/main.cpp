#include <iostream>
#include "Point.h" //подключение заговочного файла в файле использования класса

using namespace std;

//клиентская функция для измерения расстояния между точками
//к классу не относится, поэтому описывается отдельно
double gdist(Point &a, Point &b) //передача по ссылке
{ //использует Get...() для доступа к x и y
	return sqrt(pow(static_cast<double>(a.GetX() - b.GetX()), 2)
		+ pow(static_cast<double>(a.GetY() - b.GetY()), 2));
}

//главная функция
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "C");

	Point a; //Создание экземпляра класса Point в стеке
	// a.x = 6; //ERROR, т.к. x объявлен private
	// a.y = 8; //ERROR, т.к. y объявлен private
	a.SetX(6);
	a.SetY(8);
	cout << "Точка A: " << a.GetX() << ',' << a.GetY() << endl;
	Point *p = new Point; //Создание экземпляра класса Point в динамической памяти (куча)
	p->SetX(9);
	p->SetY(12);
	cout << "Точка P: " << p->GetX() << ',' << p->GetY() << endl;
	cout << "Расстояние от точки A до точки Р: " << gdist(a, *p) //разадресация, т.к. требуется Point
		<< endl;

	cout << "Пример использования расширенного интерфейса" << endl;

	a.Move(-10, 4); // смещение координаты точки
	cout << "Координаты точки A после сдвига по оси X на -10, по оси Y на +4: ";
	a.Print();
	cout << endl;
	if (p->Read("Введите координаты точки в формате (x,y) ")) // ввод координат точки
	{
		cout << "Расстояние от  "; a.Print(); // вывод координат точки
		cout << " до "; p->Print();
		cout << " равно " << p->Dist(a) << endl; //или a.Dist(*p) //вычисление расстояния с помощью метода
	}
	delete p; //Удаление из кучи (нельзя забывать!)

	system("pause");
	return 0;
}