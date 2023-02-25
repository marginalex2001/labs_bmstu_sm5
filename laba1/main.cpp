#include <iostream>
#include "flight.h"
#include "table.h"
using namespace std;

void underline();

int main()
{
	underline();
	cout << "|          Start program         |" << endl;
	underline();

	Flight first; // by default
	// first.Read();
	// underline();
	first.Insert(900, "Boeing", "transport");
	// first.Read();
	// underline();
	// cout << endl;
	underline();
	table(first);
	// first.Read(2);
	underline();
	cout << endl;

	// char name[6] = "IL-56";
	// char type[10] = "transport";
	// Flight second(200, name, type);
	// second.Read();
	// underline();

	// Flight third = first;
	// third.Read();
	// underline();


	return 0;
}

void underline()
{
	cout << "/--------------------------------/" << endl;
}

