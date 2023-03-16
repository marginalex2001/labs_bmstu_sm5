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
	this->vector = new int [n];
	for (int i = 0; i < 3; i++) 
	{
		vector[i] = 1;
	}
}

Vector::Vector(const int &amount_)
{
	n = amount_;
	cout << "indicating the number of elements" << endl;
	this->vector = new int[n];
}

Vector::Vector(Vector &vector_)
{
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
	    	cout << "Enter " << i+1 << " value" << endl; 
		    cin >> vector[i];
		} catch (const exception& ex) {
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
	int valVect = sizeof(this->vector);
	int valSize = sizeof(this->vector[0]);
	int val = valVect / valSize;
	std::sort(this->vector, this->vector + val);
}

Vector Vector::operator+(Vector &vector_)
{
	int val_n = this->n;
	int val_n_ = vector_.n;

	if (val_n < val_n_) 
	{
		val_n = val_n_;
	}
	if (val_n > val_n_)
	{
		val_n_ = val_n;
		val_n = val_n_;
	}

	Vector temp(val_n);
	if (this->n < vector_.n)
	{
		for (int i = 0; i < this->n; i++) 
		{
			temp.vector[i] = this->vector[i];
		}
		for (int i = this->n; i < vector_.n; i++) 
		{
			temp.vector[i] = 1;
		}
		for (int i = 0; i < this->n; i++) 
		{
			temp.vector[i] = this->vector[i] + vector_.vector[i];
		}
	}
	if (vector_.n < this->n)
	{
		for (int i = 0; i < vector_.n; i++) 
		{
			temp.vector[i] = vector_.vector[i];
		}
		for (int i = vector_.n; i < val_n; i++ ) 
		{
			temp.vector[i] = 1;
		}
		for (int i = 0; i < this->n; i++) 
		{
			temp.vector[i] = temp.vector[i] + this->vector[i];// + vector_.vector[i];
		}

	}

		return temp;
}

Vector Vector::operator-(Vector &vector_)
{
	// int val_n = this->n;
	// int val_n_ = vector_.n;
	//
	// if (val_n < val_n_) 
	// {
	// 	val_n = val_n_;
	// }
	// if (val_n > val_n_)
	// {
	// 	val_n_ = val_n;
	// 	val_n = val_n_;
	// }
	//
	// Vector temp(val_n);
	// if (this->n < vector_.n)
	// {
	// 	for (int i = 0; i < this->n; i++) 
	// 	{
	// 		temp.vector[i] = this->vector[i];
	// 	}
	// 	for (int i = this->n; i < vector_.n; i++) 
	// 	{
	// 		temp.vector[i] = 1;
	// 	}
	// 	cout << temp.vector[0] << temp.vector[1] << temp.vector[2] << endl;
	// 	for (int i = 0; i < this->n; i++) 
	// 	{
	// 		temp.vector[i] = temp.vector[i] - vector_.vector[i];// - vector_.vector[i];
	// 		cout << temp.vector[0] << temp.vector[1] << temp.vector[2] << endl;
	// 		cout << this->vector[0] << this->vector[1] << this->vector[2] << endl;
	// 	}
	// }
	// if (vector_.n < this->n)
	// {
	// 	for (int i = 0; i < vector_.n; i++) 
	// 	{
	// 		temp.vector[i] = vector_.vector[i];
	// 	}
	// 	for (int i = vector_.n; i < val_n; i++ ) 
	// 	{
	// 		temp.vector[i] = 1;
	// 		cout << vector_.n << endl;
	// 	}
	// 	for (int i = 0; i < val_n; i++) 
	// 	{
	// 		temp.vector[i] = this->vector[i] + vector_.vector[i];
	// 	}
	//
	// }
	Vector temp(this->n);
	// Vector temp_(vector_.n);
	for (int i = 0; i < this->n; i++) 
	{
		temp.vector[i] = this->vector[i] - vector_.vector[i];
	}
	return temp;
}
