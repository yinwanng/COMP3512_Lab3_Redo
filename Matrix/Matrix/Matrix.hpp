#pragma once
#include <iostream>
using std::ostream;

class Matrix
{
public:
	Matrix();
	~Matrix();
	Matrix(const Matrix &);
	Matrix(int);
	Matrix(int[], int);
	void set_value(int, int, int);
	int get_value(int, int) const;
	void clear() const;
	friend ostream & operator<<(ostream &, const Matrix &);

	// comparison operators
	friend bool operator==(const Matrix&, const Matrix&);
	friend bool operator!=(const Matrix&, const Matrix&);
	friend bool operator<(const Matrix&, const Matrix&);
	friend bool operator>(const Matrix&, const Matrix&);
	friend bool operator<=(const Matrix&, const Matrix&);
	friend bool operator>=(const Matrix&, const Matrix&);

	
	Matrix& operator++();//prefix incremnet
	Matrix operator++(int);//postfix increment
	Matrix& operator--();  // prefix decrement


	// assignment operator using the copy-and-swap algorithm
	friend void swap(Matrix&, Matrix&);
	Matrix& operator=(Matrix);
private:
	int *matrix;
	int dimensions;
};