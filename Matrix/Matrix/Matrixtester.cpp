#include <iostream>
#include "Matrix.hpp"

using std::cout;
using std::endl;
using std::invalid_argument;

int main()
{
	int values[] = { 1, 2, 3, 4 };
	
	
	try {
		Matrix a(values, 4);
		//a.print();
	}
	catch (const invalid_argument& e) {
		cout << "ERROR: " << e.what() << endl;
	}



	Matrix b(values, 4);
	//b.set_value(0,0,2);
	b.print();
	b.clear();
	b.print();
	






	cout << endl;
	system("pause");
	return 0;
}