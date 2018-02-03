#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4};
	int values2[] = { 1, 2, 3, 4};
	

	Matrix a(values, 4);
	Matrix b(values2, 4);
	
	Matrix c;

	cout << a << endl;


	cout << b << endl;

	c = a + b;

	cout << c << endl;


	
	system("pause");

}