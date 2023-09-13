#include<iostream>

using namespace std;

void task_1() {
	// Дано масив розміром 4х3 з елементами цілого типу.
	// Визначити кількість елементів відмінних від нуля.

	const int row = 4;
	const int col = 3;
	int arr[row][col];

	int counter = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] != 0) {
				counter++;
			}
		}
	}
	cout << "Elements != 0: " << counter << endl;
}

void task_2() {
	//Дано масив розміром 3х3 з елементами цілого типу.
	//Визначити кількість елементів які б дорівнювали нулю. 


	const int row = 3;
	const int col = 3;
	int arr[row][col];

	int counter = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] == 0) {
				counter++;
			}
		}
	}
	cout << "Elements == 0: " << counter << endl;
}

void task_3() {
	//Дано масив розміром 7х3 з елементами цілого типу.
	//Визначити кількість елементів, модуль яких менший 12. rand() % 24 - 12

	const int row = 7;
	const int col = 3;
	int arr[row][col];

	int counter = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 24 - 12;

			if (arr[i][j] > 0) {
				arr[i][j] *= -1;
			}

			if (arr[i][j] < 12) {
				counter++;
			}
		}
	}
	cout << "Number of elements with a module less than 12: " << counter << endl;
}

void task_4() {
	//Дано масив розміром 4х5 з елементами цілого типу(позитивні та від'ємні).
	//Визначити кількість позитивних елементів.

	const int row = 4;
	const int col = 5;
	int arr[row][col];

	int counter = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] > 0) {
				counter++;
			}
		}
	}
	cout << "Number of positive numbers: " << counter;
}

void task_5() {
	//Дано масив розміром 5х4 з елементами дійсного типу(додатні та від'ємні).
	//Визначити добуток всіх додатніх елементів.

	const int row = 5;
	const int col = 4;
	int arr[row][col];

	int product = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] > 0) {
				product += arr[i][j];
			}
		}
	}
	cout << "Product = " << product << endl;
}

void task_6() {
	//Дано масив розміром 5х4 з елементами дійсного типу(позитивні та від'ємні).
	//Визначити добуток всіх від'ємних елементів.

	const int row = 5;
	const int col = 4;
	int arr[row][col];

	int product = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] < 0) {
				product += arr[i][j];
			}
		}
	}
	cout << "Product = " << product << endl;
}

void task_7() {
	//Дано масив розміром 4х4 з елементами цілого типу.
	//Визначити кількість елементів, які б при діленні на 6 давали залишок 1.

	const int row = 4;
	const int col = 4;
	int arr[row][col];

	int counter = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] % 6 == 1) {
				counter++;
			}
		}
	}
	cout << "the number of elements that would give a remainder of 1 when divided by 6: " << counter << endl;

}

void task_8() {
	//Дано масив розміром 5хб цілого типу. Знайти мінімальний елемент.

	const int row = 5;
	const int col = 6;
	int arr[row][col];

	int min = 20;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	cout << "Min value = " << min << endl;
}

void task_9() {
	//Дано масив розміром 5×6 цілого типу. Знайти максимальний елемент.

	const int row = 5;
	const int col = 6;
	int arr[row][col];

	int max = -20;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}
	cout << "Max value = " << max << endl;
}

void task_10() {
	//Дано масив розміром 5х4 з елементами дійсного типу (позитивні та від'ємні). 
	// Визначити суму всіх від'ємних елементів.

	const int row = 5;
	const int col = 4;
	int arr[row][col];

	int sum = 20;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -20 + rand() % 20;

			if (arr[i][j] < 0) {
				sum += arr[i][j];
			}
		}
	}
	cout << "Sum of all numbers < 0:  " << sum << endl;
}


void main() {

	int choice = 0;

	cout << "Enter task number (1-10): "; cin >> choice;

	switch (choice) {
	case 1: task_1(); break;
	case 2: task_2(); break;
	case 3: task_3(); break;
	case 4: task_4(); break;
	case 5: task_5(); break;
	case 6: task_6(); break;
	case 7: task_7(); break;
	case 8: task_8(); break;
	case 9: task_9(); break;
	case 10: task_10(); break;
	default: cout << "Wrong choice!" << endl; break;
	}
}