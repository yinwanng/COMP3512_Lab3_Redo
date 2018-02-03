#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4, 5 ,6, 7, 8, 9};
	int values2[] = { 1, 2, 3, 4 , 5, 6, 7, 8, 9};
	

	Matrix a(values, 9);
	Matrix b(values2, 9);

	if (a >= b)
	{
		cout << "it is greater or equal";
	}
	else
	{
		cout << "it is not greater or equal";
	}
	


	
	system("pause");

}