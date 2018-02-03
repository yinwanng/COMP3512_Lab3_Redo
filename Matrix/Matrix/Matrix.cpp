#include "Matrix.hpp"
#include <iostream>

using std::cout;
using std::invalid_argument;

Matrix::Matrix()
{
	dimensions = 1;
	matrix = new int[dimensions];
	matrix[0] = 0;
}

Matrix::Matrix(int n)
{
	dimensions = n;
	matrix = new int[n * n];
	for (int row = 0; row < dimensions; row++) {
		for (int col = 0; col < dimensions; col++) {
			matrix[row * dimensions + col] = 0;
		}
	}
}

Matrix::Matrix(int tempArray[], int size)
{
	double sqrtNum = sqrt(size);

	if ((sqrtNum * sqrtNum) == size) 
	{
		dimensions = sqrtNum;
		matrix = new int[size];
		for (int row = 0; row < dimensions; row++) {
			for (int col = 0; col < dimensions; col++) {
				matrix[row * dimensions + col] = tempArray[row * dimensions + col];
			}
		}
	}
	else
	{
		throw invalid_argument("The size must have an integer square root.");
	}
}

void Matrix::set_value(int row, int col, int value)
{
	matrix[row * dimensions + col] = value;
}

// for testing purposes
void Matrix::print() const
{
	for (int row = 0; row < dimensions; row++) {
		for (int col = 0; col < dimensions; col++) {
			cout << matrix[row * dimensions + col];
		}
	}
}



