#pragma once
#include <iostream>
using namespace std;

#ifndef ARRAY_H
#define ARRAY_H

/**
* function to check if a certain integer exists in the array if
* the number is present return the index where the number is present.
* @param  integer array input an array.
* @param  integer size input the size of the array.
* @param  integer num the number you try to find.
* @return the index where the number is find.
**/

int num_find(int array[], int size, int num);

/**
* function that can modify the value of an integer when called with the
* index of the integer in the array and return the new value and old value
* back to the user.
* @param integer array input an array.
* @param integer size input the size of the array.
* @param integer the number at what index you try to modify.
* @param int newVaule the new number at that index.
* @return the old value.
**/

int modify(int array[], int size, int index, int newVaule);

/**
* function that adds a new integer to the end of the array
* @param integer array input an array.
* @param integer size input the size of the array.
* @param int the number you try to add to the end of the array.
* @return none.
**/

void adding_number(int array[], int &size,int num);

/**
* A function which intakes an index of an array and removes the integer.
* @param integer array input an array.
* @param integer size input the size of the array.
* @param int the number at that index you try to remove.
* @return none.
**/

void remove_element(int array[], int &size, int indexToRemove);

#endif