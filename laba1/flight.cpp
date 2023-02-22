#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <ostream>
#include "flight.h"

using namespace std;

Flight::Flight()
{
	cout << "Construct by default" << endl;
	this->name = new char[2];
	*name = '\0';
	this->type = new char[2];
	*type = '\0';
}

Flight::Flight(const int speed_, const char *name_, const char *type_)
{
	cout << "Construct with parameters" << endl;			//set speed
	this->speed = speed_;
	
	len_name = strlen(name_);						//set name
	this->name = new char[len_name + 1];
	strcpy(this->name,name_);

	len_type = strlen(type_);						//set type
	this->type = new char[len_type + 1];
	strcpy(this->type,type_);
			
}//construct by default
Flight::Flight(const Flight & flight)
{
	cout << "Construct copy" << endl;
	this->speed = flight.speed;

	this->len_name = flight.len_name;
	this->name = new char[len_name + 1];
	strcpy(this->name, flight.name);

	this->len_type = flight.len_type;
	this->type = new char[len_type + 1];
	strcpy(this->type, flight.type);
}//construct copy


void Flight::Insert(const float speed, const char *name, const char *type)
{
	cout << "Insert values in object" << endl;			//set speed
	this->speed = speed;
	
	len_name = strlen(name);						//set name
	this->name = new char[len_name + 1];
	strcpy(this->name,name);

	len_type = strlen(type);						//set type
	this->type = new char[len_type + 1];
	strcpy(this->type,type);

}

void Flight::Read()
{
	cout << "Speed: " << speed << endl;
	cout << "Name: " << name << endl;
	cout << "Type: " << type << endl;
}

Flight::~Flight()
{
	cout << "DESTRUCT" << endl;
	delete [] name;
	delete [] type;
}//destruct
