#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);

	void print() const;
private:
	int *matrix;
	int dimensions;
};