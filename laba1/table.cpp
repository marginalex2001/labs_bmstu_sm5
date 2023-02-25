#include "table.h"
#include "flight.h"
#include <iostream>
#include <iomanip>

using namespace std;

void table(Flight &object)
{
	int i = 1;
	cout << "******************************************" << endl;
	cout << "|  № |  speed  |    name    |    type    |" << endl;
	cout << "+----+---------+------------+------------+" << endl;
	cout << "|" << setw(4) << i << "|" << setw(9) << object.Read(1) << "|" << setw(12) << object.Read(2) << "|" << setw(12) << object.Read(3) << "|" << endl;
	// object.Read();
}
