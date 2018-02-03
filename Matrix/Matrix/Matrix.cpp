#include "Matrix.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::invalid_argument;

Matrix::Matrix()
{
	dimensions = 1;
	matrix = new int[dimensions];
	matrix[0] = 0;
}

Matrix::Matrix(const Matrix &other)
{
	dimensions = other.dimensions;
	matrix = new int[dimensions * dimensions];
	for (int row = 0; row < dimensions; row++) {
		for (int col = 0; col < dimensions; col++) {
			matrix[row * dimensions + col] = other.matrix[row * dimensions + col];
		}
	}
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
		dimensions = (int)sqrtNum;
		matrix = new int[size];
		for (int row = 0; row < dimensions; row++) {
			for (int col = 0; col < dimensions; col++) {
				matrix[row * dimensions + col] = tempArray[row * dimensions + col];
			}
		}
	}
	else
	{
		//throw invalid_argument("The size must have an integer square root.");
		cout << "The size must have an integer square root." << endl;
	}
}

void Matrix::set_value(int row, int col, int value)
{
	matrix[row * dimensions + col] = value;
}

int Matrix::get_value(int row, int col) const
{
	return matrix[row * dimensions + col];
}

void Matrix::clear() const
{
	for (int row = 0; row < dimensions; row++) {
		for (int col = 0; col < dimensions; col++) {
			matrix[row * dimensions + col] = 0;
		}
	}
}

Matrix & Matrix::operator++()
{
	for (int row = 0; row < dimensions; row++) {
		for (int col = 0; col < dimensions; col++) {
			matrix[row * dimensions + col] = matrix[row * dimensions + col] + 1;
		}
	}
	return *this;
}

Matrix Matrix::operator++(int)
{
	Matrix tmp(*this);
	operator++();
	return tmp;
}

ostream & operator<<(ostream & out, const Matrix & m)
{
	for (int row = 0; row < m.dimensions; row++) {
		for (int col = 0; col < m.dimensions; col++) {
			out << m.get_value(row, col);
			if (col % m.dimensions == m.dimensions - 1)
			{
				out << "\n";
			}
		}
	}
	return out;
}

bool operator==(const Matrix &lhs, const Matrix &rhs)
{
	if (lhs.dimensions != rhs.dimensions) {
		return false;
	}
	else
	{
		for (int row = 0; row < lhs.dimensions; row++) {
			for (int col = 0; col < lhs.dimensions; col++) {
				if (lhs.matrix[row * lhs.dimensions + col] != rhs.matrix[row * rhs.dimensions + col]) {
					return false;
				}
			}
		}
		return true;
	}
}

bool operator!=(const Matrix &lhs, const Matrix &rhs)
{
	return !operator==(lhs, rhs);
}

bool operator<(const Matrix &lhs, const Matrix &rhs)
{
	if (lhs.dimensions < rhs.dimensions) {
		return true;
	}
	return false;
}

bool operator>(const Matrix & lhs, const Matrix &rhs)
{
	return operator< (rhs, lhs);
}

bool operator<=(const Matrix & lhs, const Matrix &rhs)
{
	return !operator> (lhs, rhs);
}

bool operator>=(const Matrix & lhs, const Matrix &rhs)
{
	return !operator< (lhs, rhs);
}

void swap(Matrix &first, Matrix &second)
{
	using std::swap;
	swap(first.dimensions, second.dimensions);
	swap(first.matrix, second.matrix);
}

Matrix & Matrix::operator=(Matrix other)
{
	swap(*this, other);
	return *this;
}
