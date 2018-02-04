#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4};
	int values2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

	 int *big = new int[25];
	 for (int i = 0; i < 25; ++i)
	 {
		 big[i] = 1;
	 }
	 
	

	Matrix a(values, 4);
	Matrix b(values2, 9);
	Matrix c(big, 25);
	
	//Matrix c;

	cout << a << endl;


	cout << c << endl;



	Matrix q = c.identity();
	cout << q << endl;

	
	system("pause");

}