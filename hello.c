#include <stdio.h>

void menu();
void name();
void hi();

int main()
{
  int a = 3;
  printf("+---+----+\n");
  printf("|%3d|%4d|\n", a, 550);
  printf("+---+----+\n");
  menu();
  printf("hi");
  hi();
  name();
  return 0;
}

void menu()
{
    printf("+-----------+\n");
    printf("|press Enter|\n");
    printf("+-----------+\n");
}

void name()
{
	printf("hi");
}

void hi()
{
	getchar();
}
