#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4 };
	

	Matrix a(values, 4);

	cout << a;


	
	system("pause");

}