#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);
	void set_value(int, int, int);


	void print() const; // for testing purposes
private:
	int *matrix;
	int dimensions;
};