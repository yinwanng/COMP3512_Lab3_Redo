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
	friend ostream & operator<<(ostream &, const Matrix &);

	// comparison operators
	friend bool operator==(const Matrix&, const Matrix&);
	friend bool operator!=(const Matrix&, const Matrix&);
	//friend bool operator<(const Matrix&, const Matrix&);
	//friend bool operator<(const Matrix&, const Matrix&);
	//friend bool operator>(const Matrix& lhs, const Matrix&);
	//friend bool operator<=(const Matrix& lhs, const Matrix&);
	//friend bool operator>=(const Matrix& lhs, const Matrix&);
private:
	int *matrix;
	int dimensions;
};