#pragma once
#include <iostream>
using std::ostream;

class Matrix
{
public:
	Matrix();
	~Matrix()
	{
		delete[] matrix;
	}
	
	Matrix(int);
	Matrix(int[], int);
	void set_value(int, int, int);
	int get_value(int, int) const;
	void clear() const;
	void print(); // for testing purposes
private:
	int *matrix;
	int dimensions;
};