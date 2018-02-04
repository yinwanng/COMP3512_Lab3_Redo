#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	cout << "Lab 3 - Yin Wan Johnny Ng" << endl << endl;

	// e
	Matrix a;
	cout << "(e) Matrix a; 1 x 1 Matrix created using default constructor that contains 0: \n" << a << endl;

	// f
	Matrix b(2);
	cout << "(f) Matrix b(2); 2 x 2 Matric created using a constructor that accepts an integer: \n" << b << endl;

		
	// g
	int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	Matrix c(values, 9);
	
	cout << "(e) Matrix c(values, 9); \n3 x 3 Matrix created that accepts an array of int" << endl;
	cout << "int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };\n";
	cout << c << endl;
	int values2[] = { 1, 2, 3};
	cout << "int values2[] = { 1, 2, 3};\n";
	cout << "Attempting to create a Matrix where the array size does not have an integer square root: \nMatrix d(values2, 3);\n";
	Matrix d(values2, 3);


	// h
	cout << "\n(h)Demonstrating the set_value method: \n";
	cout << "Before: \n";
	cout << b << endl;
	cout << "After using set_value(0, 1, 9): \n";
	b.set_value(0, 1, 9);
	cout << b << endl;

	// i
	cout << "(i) Demonstrating the get_value method: \n";
	cout << "Current matrix: \n" << c << endl;
	cout << "get_value(1, 3); is " << c.get_value(1, 3) << endl << endl;

	// j
	cout << "(j) Demonstrating the clear function:\n";
	cout << "Current Matrix: \n" << endl;
	cout << c << endl;
	cout << "Invoking the clear function: \n";
	c.clear();
	cout << c << endl;

	// k
	cout << "\n(k) Demonstrating the identity function:\n";
	int lotOfNumbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
	Matrix e(lotOfNumbers, 25);
	cout << "Current matrix: \n";
	cout << e << endl;
	cout << "Invoking the identity function: \n" << endl;
	Matrix f = e.identity();
	cout << f << endl;

	// l
	// Destructor - see code in Matrix.cpp

	// m
	cout << "(m) Demonstrating insertion operator: cout << f << endl; has been entered\n";
	cout << f << endl;

	// n
	cout << endl << endl;
	int g[] = { 1, 2, 3, 4 };
	int h[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	Matrix j(g, 4);
	Matrix k(h, 9);
	Matrix l(i, 9);

	cout << "(n) Demonstrating comparison operators now: " << endl;
	cout << "Arrays being used are:\nint g[] = { 1, 2, 3, 4 };\nint h[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};\nint i[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };\n";
	cout << "Matrices being used: Matrix j(g, 4); Matrix k(h, 9); Matrix l(i, 9);" << endl;
	// ==
	cout << "\n\nDemonstrating k == l\n";
	if (k == l) {
		cout << "They are the same.\n";
	}
	else {
		cout << "They are not the same.\n";
	}
	cout << "\n\nDemonstrating j == k\n";
	if (j == k) {
		cout << "They are the same.\n";
	}
	else {
		cout << "They are not the same.\n";
	}
	// !=
	cout << "\n\nDemonstrating j != k\n";
	if (j != k)
	{
		cout << "J is not equal to K.\n";
	}
	else
	{
		cout <<"J is equal to K. \n";
	}
	// <
	cout << "\n\nDemonstrating j < k\n";
	if (j < k)
	{
		cout << "j is less than k.\n";
	}
	else
	{
		cout << "j is not less than k.";
	}
	
	// >
	cout << "\n\nDemonstrating j > k \n";
	if (j > k)
	{
		cout << "j is greater than k.\n";
	}
	else
	{
		cout << "j is not greater than k.";
	}

	// <=
	cout << "\n\nDemonstrating j <= k \n";
	if (j <= k)
	{
		cout << "j is less than or equal to k.\n";
	}
	else
	{
		cout << "j is not less than or equal to k.\n";
	}

	// >=
	cout << "\n\nDemonstrating j >= k \n";
	if (j >= k)
	{
		cout << "j is greater than or equal to k.\n";
	}
	else
	{
		cout << "j is not greater than or equal to k.\n";
	}

	// o
	cout << "\n(o) Demonstrating unary increment and decrement operators now.\n" << endl;

	// ++pre
	cout << "Current:\n";
	cout << k << endl;
	++k;
	cout << "++k Prefix increment:\n";
	cout << k << endl;
	// post++
	cout << "Current:\n";
	cout << k << endl;
	k++;
	cout << "k++ Postfix increment:\n";
	cout << k << endl;
	// --pre
	cout << "Current:\n";
	cout << k << endl;
	--k;
	cout << "--k Prefix decrement:\n";
	cout << k << endl;
	// post--
	cout << "Current:\n";
	cout << k << endl;
	k--;
	cout << "k-- Postfix decrement:\n";
	cout << k << endl;

	// p
	cout << "\n(p) Assignment operator using the copy-and-swap" << endl;
	cout << "Current Matrix J: \n" << j << endl;
	cout << "Current Matrix K: \n" << k << endl;
	cout << "Demonstrating k = j \n";
	k = j;
	cout << "Matrix J: \n" << j << endl;
	cout << "Matrix K: \n" << k << endl;
	
	// q
	cout << "(q) Demonstrating binary arthmetic operators " << endl;
	// +=
	cout << "Demonstrating += using j+=k\n";
	cout << "Current Matrix J: \n" << j << endl;
	cout << "Current Matrix K: \n" << k << endl;
	cout << "After: \n";
	j += k;
	cout << "Matrix J: \n" << j << endl;
	cout << "Matrix K: \n" << k << endl;

	// +
	int z[] = { 1, 2, 3, 4 };
	Matrix q(z, 4);
	Matrix r(z, 4);
	Matrix s(z, 4);
	cout << "Demonstrating + using q=r+s\n";
	cout << "Current Matrix Q: \n" << q << endl;
	cout << "Current Matrix R: \n" << r << endl;
	cout << "Current Matrix S: \n" << s << endl;
	cout << "After: \n";
	q = r + s;
	cout << "Matrix Q: \n" << q << endl;
	cout << "Matrix R: \n" << r << endl;
	cout << "Matrix S: \n" << s << endl;

	// -=
	cout << "Demonstrating -= using r-=s\n";
	cout << "Current Matrix R: \n" << r << endl;
	cout << "Current Matrix S: \n" << s << endl;
	cout << "After: \n";
	r -= s;
	cout << "Matrix R: \n" << r << endl;
	cout << "Matrix S: \n" << s << endl;
	
	// -
	int x[] = { 3, 2, 5, 8 };
	Matrix y(x, 4);
	Matrix u(x, 4);
	Matrix v(x, 4);
	cout << "Demonstrating - using y=u-v\n";
	cout << "Current Matrix Y: \n" << y << endl;
	cout << "Current Matrix U: \n" << u << endl;
	cout << "Current Matrix V: \n" << v << endl;
	cout << "After: \n";
	y = u - v;
	cout << "Matrix Y: \n" << y << endl;
	cout << "Matrix U: \n" << u << endl;
	cout << "Matrix V: \n" << v << endl;

	cout << endl;
	system("pause");
}