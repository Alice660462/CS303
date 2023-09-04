#include <iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include"array.h"
using namespace std;

int num_find(int array[], int size, int num) {
	for (int i = 0; i < size; i++) {
		if (array[i] == num) {
			return i;
		}
	}
	return -1;
}


int modify(int array[], int size, int index, int newVaule) {
	int oldVaule;
	if (index >= 0 && index < size) {
		oldVaule = array[index];
		array[index] = newVaule;
		return oldVaule;
	}
	// exception handling
	else {
		throw(101);
	}
}


void adding_number(int array[],int &size, int num) {
	if (size >= 200) {
		//exception handling
		throw( - 1);
	}
    array[size] = num;
	size++;
}


void remove_element(int array[], int &size, int indexToRemove) {
	if(indexToRemove < 0 || indexToRemove>= size){
		return;
		}
	else {
		for (int i = indexToRemove; i < size - 1; i++){
			array[i] = array[i + 1];
		}
	}
	size--;
}