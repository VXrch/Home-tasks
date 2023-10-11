﻿#include <iostream>

using namespace std;

void Print(int** arr, int rows, int cols) {

	for (int i = 0; i < rows; i++)
	{
		cout << " ------ " << i << " ------ " << endl;
		for (int j = 0; j < cols; j++)
		{
			cout << " { " << j << " }-";
			cout << "[" << arr[i][j] << "] ";
		}
		cout << endl;
	}
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_" << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void AddLineBegin(int**& arr, int& rows, int& cols) {

	int** temp = new int* [rows + 1];
	temp[0] = new int[cols];

	for (int j = 0; j < cols; j++) {
		temp[0][j] = 10 + rand() % 89;
	}

	for (int i = 0; i < rows; i++)
	{
		temp[i + 1] = arr[i];
	}

	delete[]arr;
	arr = temp;
	rows++;
}

void task_1(int**& arr, int &rows, int &cols) {

	/*	Завдання 1.
		Написати функцію, що додає рядок двовимірному масиву на початок. */

	AddLineBegin(arr, rows, cols);
	Print(arr, rows, cols);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteLineBegin(int**& arr, int& rows, int& cols) {

	int** temp = new int* [rows - 1];

	for (int i = 1; i < rows; i++)
	{
		temp[i - 1] = arr[i];
	}

	delete[]arr[0];
	delete[]arr;
	arr = temp;
	rows--;
}

void task_2(int**& arr, int& rows, int& cols){

	/*	Завдання 2. 
		Написати функцію, що видаляє рядок двовимірному масиву з початку.*/

	DeleteLineBegin(arr, rows, cols);
	Print(arr, rows, cols);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void task_3(int**& arr, int& rows, int& cols){

	/*	Завдання 3.
		Написати функцію, що видаляє рядок двовимірному масиву з зазначеної позиції.*/



}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void task_4(int**& arr, int& rows, int& cols){

	/*Завдання 4. 
	Написати функцію, що додає колонку двовимірного масиву за вказаним номером.*/


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void task_5(int**& arr, int& rows, int& cols){

	/*Завдання 5. 
	Написати функцію, що додає колонку двовимірного масиву на початок.*/


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main() {

	srand(time(NULL));

	int rows = 10;
	int cols = 10;

	int** arr = new int*[rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
			arr[i][j] = 10 + rand() % 89;
		}
	}

	Print(arr, rows, cols);

	int choice;

	cout << "Enter task number (1-5): "; cin >> choice;

	switch (choice)
	{
	case 1: task_1(arr, rows, cols); break;
	case 2: task_2(arr, rows, cols); break;
	case 3: task_3(arr, rows, cols); break;
	case 4: task_4(arr, rows, cols); break;
	case 5: task_5(arr, rows, cols); break;
	default: cout << "Wrong number!" << endl; break;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}