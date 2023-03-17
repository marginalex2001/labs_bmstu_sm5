#include "vector.h"
//#include "menu.h"
#include <iostream>

using namespace std;

void underline();

int main()
{
	/*int i;
	int counter = 0;
	Vector arr[100];
	do
	{
		i = menu();
		switch (i)
		{
		case 1:
			//Vector vector;
			//arr[counter] = vector;
			arr[counter] = Vector();

			break;
		case 4:
			cout << "Enter number of elem" << endl;
			int num;
			cin >> num;
			arr[num - 1].GetVector();
			cout << endl;
		case 0:
			break;

		default:
			break;
		}
	} while (i != 0);*/
	underline();
	cout << "/            Start programm            /" << endl;
	underline();

	cout << "Create default vector" << endl;
	Vector vector1;

	underline();

	int counter;
	cout << "Create vector with a custom number of elements\n" << endl << "Enter number of elements: ";
	cin.exceptions(cin.failbit);
	try {
		cin >> counter;
	}
	catch (const exception& ex) {
		cout << "\033[31m!!!!!!!!!!!!!" << endl << ex.what() << endl;
		cout << "\nError!!!" << endl << "Enter value again!!!" << endl << "!!!!!!!!!!!!!\033[0m\n" << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}
	Vector vector2(counter);
	cout << "\nSet vector2: " << endl;
	vector2.SetVector();
	cout << endl;

	underline();

	cout << "Copy vector2 to vector3" << endl;
	Vector vector3(vector2);

	underline(); underline();

	cout << "Vector 1: "; vector1.GetVector(); cout << endl;
	cout << "Vector 2: "; vector2.GetVector(); cout << endl;
	cout << "Vector 3: "; vector3.GetVector(); cout << endl;

	underline();
	cout << "\n\n" << endl;

	cout << "vector2 = vector2 - vector1 :" << endl;
	cout << "vector2 before:" << endl;
	vector2.GetVector();
	vector2 = vector2 - vector1;
	cout << "vector2 after:" << endl;
	vector2.GetVector();
	underline();
	cout << "Sort vector2 :" << endl;
	cout << "vector2 before:" << endl;
	vector2.GetVector();
	vector2.SortVector();
	cout << "vector2 after:" << endl;
	vector2.GetVector();
	
	return 0;
}

void underline()
{
	cout << "/--------------------------------------/" << endl;
}