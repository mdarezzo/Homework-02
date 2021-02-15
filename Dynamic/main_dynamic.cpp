//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <iostream>
#include "../matrix_dynamic.h"
using namespace std;

int main(int argc, char const* argv[])
{
	int r, c, i, j, val;
	matrix a, tran;

	cout << "How many rows? ";
	cin >> r;
	cout << "How many columns? ";
	cin >> c;

	a = create_initval(r, c, 0);

	cout << "\nEnter matrix elements: \n";
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
		{
			cout << "Element: [" << i + 1 << "], [" << j + 1 << "]: ";
			cin >> val;
			assign(i, j, &a, val);
		}

	tran = transpose(a);

	cout << "\nMatrix: ";
	matrix_print(a);

	cout << "\n Transpose of Matrix a:";
	matrix_print(tran);

	return 0;
}
