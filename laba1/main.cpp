#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
	cout << "Start program" << endl;
	
	Flight first; // by default
	first.Read();
	first.Insert(0, "name", "type");
	first.Read();

	char name[6] = "IL-56";
	char type[10] = "transport";
	Flight second(200, name, type);
	second.Read();

	return 0;
}
