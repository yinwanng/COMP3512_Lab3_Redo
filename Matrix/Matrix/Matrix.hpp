#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);

	void print() const;
private:
	int *matrix;
	int dimensions;
};