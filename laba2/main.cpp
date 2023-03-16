#include "vector.h"

int main()
{
	Vector vector;
	Vector vector2(2);
	// Vector vector3(vector2);
	// vector.GetVector();
	// vector2.GetVector();
	// vector3.GetVector();
	vector2.SetVector();
	// vector2.SortVector();
	// vector2.GetVector();

	// vector2 = vector2 + vector;
	vector2.GetVector();
	vector.GetVector();
	vector2 = vector2 - vector;
	vector2.GetVector();
	vector.GetVector();

	return 0;
}
