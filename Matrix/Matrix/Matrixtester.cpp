#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4 };
	
	
	try {
		Matrix a(values, 2);
		a.print();
	}
	catch (const invalid_argument& e) {
		cout << "ERROR: " << e.what() << endl;

	}
	






	cout << endl;
	system("pause");
	return 0;
}