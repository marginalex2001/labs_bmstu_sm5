#include "vector.h"
#include <iostream>
#include <array>
#include <algorithm>
#include <string>


using namespace std;


Vector::Vector()
{
	cout << "By default" << endl;
	n = 3;
	this->vector = new int[n];
	for (int i = 0; i < 3; i++)
	{
		vector[i] = 1;
	}
}

Vector::Vector(const int& amount_)
{
	n = amount_;
	cout << "indicating the number of elements" << endl;
	this->vector = new int[n];
}

Vector::Vector(Vector& vector_)
{
	cout << "Copy constr" << endl;
	n = vector_.n;
	this->vector = new int[n];
	for (int i = 0; i < n; i++)
	{
		this->vector[i] = vector_.vector[i];
	}
}

void Vector::SetVector()
{
	for (int i = 0; i < n; i++)
	{
		cin.exceptions(cin.failbit);
		try {
			cout << "Enter " << i + 1 << " element" << endl;
			cin >> vector[i];
		}
		catch (const exception& ex) {
			cout << "\033[31m!!!!!!!!!!!!!" << endl << ex.what() << endl;
			cout << "\nError!!!" << endl << "Enter value again!!!" << endl << "!!!!!!!!!!!!!\033[0m\n" << endl;
			cin.clear();
			cin.ignore(10, '\n');
			i--;
		}
	}
}

void Vector::GetVector() const
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << this->vector[i] << "]";
	}
	cout << endl;
}

int Vector::GetSizeVector() const
{
	return this->n;
}

void Vector::SortVector()
{
	std::sort(this->vector, this->vector + n);
}

Vector& Vector::operator-(const Vector& vector_)
{
	if (this->n == vector_.n)
	{
		for (int i = 0; i < this->n; i++)
		{
			this->vector[i] = this->vector[i] - vector_.vector[i];
		}

		return *this;
	}

	bool vect_ShorterThis = this->n > vector_.n ? true : false;

	if (vect_ShorterThis == false)
	{
		static Vector temp(n);
		for (int i = 0; i < this->n; i++)
		{
			temp.vector[i] = this->vector[i];
		}
		delete [] this->vector;
		this->vector = new int[vector_.n];
		this->n = vector_.n;
		for (int i = 0; i < temp.n; i++)
		{
			this->vector[i] = temp.vector[i];
		}
		for (int i = temp.n; i < this->n; i++)
		{
			this->vector[i] = 1;
		}

		for (int i = 0; i < this->n; i++)
		{
			this->vector[i] = this->vector[i] - vector_.vector[i];
		}

		return *this;
	}

	if (vect_ShorterThis == true)
	{
		static Vector temp(this->n);
		for (int i = 0; i < vector_.n; i++)
		{
			temp.vector[i] = vector_.vector[i];
		}
		
		for (int i = vector_.n; i < this->n; i++)
		{
			temp.vector[i] = 1;
		}

		for (int i = 0; i < this->n; i++)
		{
			this->vector[i] = this->vector[i] - temp.vector[i];
		}

		return *this;
	}
	return *this;
	
}

Vector::~Vector()
{
	cout << "DESTRUCT" << endl;
	delete[] vector;
}
