#include "Matrix.hpp"
#include <iostream>

using namespace std;

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

void Matrix::print() const
{
	for (int row = 0; row < dimensions; row++) {
		for (int col = 0; col < dimensions; col++) {
			cout << matrix[row * dimensions + col];
		}
	}
}



