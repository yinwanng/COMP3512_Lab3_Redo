#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int);
	Matrix(int[], int);
	void set_value(int, int, int);
	int get_value(int, int) const;
	void clear() const;
	void print() const; // for testing purposes
private:
	int *matrix;
	int dimensions;
};