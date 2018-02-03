#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4};
	int values2[] = { 1, 2, 3, 4 , 5, 6, 7, 8, 9};
	

	Matrix a(values, 4);
	Matrix b(values2, 9);

	if (b < a)
	{
		cout << "it is less";
	}
	else
	{
		cout << "it is not less";
	}
	


	
	system("pause");

}