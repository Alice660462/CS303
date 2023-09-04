#include <iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<fstream>
#include"array.h"
using namespace std;

int main() 
{
	int array[200];
	int num1, num2;
	int newVaule;
	ifstream fin("input.txt.txt");
	int number;
	int size;

	if (fin.is_open()) {
		int i = 0;
		while (fin >> number) {
			array[i] = number;
			i++;
		}
		size = i;
	}
	else {
		return 1;
	}


	int index = 2;

	// exception handling

	try {
		adding_number(array, size, 42);
		cout << "result after using adding_number fucntion: " << endl <<endl;

		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
			if (i % 10 == 9)
				cout << endl;

		}
		cout << endl <<endl;
	}
	catch (int error) {
		cout << "Exceeds the maximum size of the array." << endl;
	}
	try {
		num2 = modify(array, size, index, 8);
		cout << "using modify function, the reults are: " << endl;
		cout << "old value: " << num2 << endl;
		cout << "new vaule: " << array[index] << endl << endl;
			for (int i = 0; i < size; i++) {
				cout << array[i] << " ";
				if (i % 10 == 9)
					cout << endl;

			}
		cout << endl << endl;
	}

	
	catch (int error) {
		
			cout << "Index value out of range." << endl;
		
	}

	num1 = num_find(array, size,5 );
	cout << "using num_find function to find 5, index is: ";
	cout << num1 << endl <<endl;
	
	remove_element(array, size, 0);
	cout << "use remove_element to remove the number at index 0: ";
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
		if (i % 10 == 9)
			cout << endl;

	}
	cout << endl << endl;
	return 0;
}