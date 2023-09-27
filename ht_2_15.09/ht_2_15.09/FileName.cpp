#include <iostream>

using namespace std;

void task_0_1() {
	// Дан двовимірний масив розмірністю 3х4. 
	// Необхідно знайти кількість елементів, значення яких дорівнює нулю.

	const int row = 3;
	const int col = 4;
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

int task_1(int** arr, int row, int col) {

	int A = 10;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i <= j) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_2(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_3(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i <= j && i + j <= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_4(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j >= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_5(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j >= A - 1 || i <= j && i + j <= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_6(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j <= A - 1 || i <= j && i + j >= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_7(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i >= j && i + j <= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_8(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i <= j && i + j >= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_9(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i + j <= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

int task_10(int** arr, int row, int col) {

	int A = 9;
	int max = 0;

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < A; j++)
		{
			if (i + j >= A - 1) {
				cout << "[" << arr[i][j] << "] ";

				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << endl;
	}
	return max;
}

void main() {

	int task_number = 0;
	int result = 0;

	int row = 0;
	int col = 0;

	cout << "Enter rows: "; cin >> row;
	cout << "Enter cols: "; cin >> col;

	int* arr = new int [row];

	for (int i = 0; i < row; ++i) {
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = 10 + rand() % 89;
		}
	}

	cout << "Enter task number (0-10): "; cin >> task_number;

	switch (task_number)
	{
	case 0: task_0_1(); break;
	case 1: result = task_1(arr, row, col); break;
	case 2: result = task_2(arr, row, col); break;
	case 3: result = task_3(arr, row, col); break;
	case 4: result = task_4(arr, row, col); break;
	case 5: result = task_5(arr, row, col); break;
	case 6: result = task_6(arr, row, col); break;
	case 7: result = task_7(arr, row, col); break;
	case 8: result = task_8(arr, row, col); break;
	case 9: result = task_9(arr, row, col); break;
	case 10: result = task_10(arr, row, col); break;
	default: cout << "Wrong number!" << endl; break;
	}

	cout << "\nMax number is: " << result << endl;

	delete[] arr;
}