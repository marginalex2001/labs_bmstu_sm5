#include <iostream>
#include "flight.h"

using namespace std;

void underline();

int main()
{
	underline();
	cout << "|          Start program         |" << endl;
	underline();

	Flight first; // by default
	first.Read();
	underline();
	first.Insert(900, "Boeing", "transport");
	first.Read();
	underline();

	char name[6] = "IL-56";
	char type[10] = "transport";
	Flight second(200, name, type);
	second.Read();
	underline();

	Flight third = first;
	third.Read();
	underline();

	return 0;
}

void underline()
{
	cout << "/--------------------------------/" << endl;
}

