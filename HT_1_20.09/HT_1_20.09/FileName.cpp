#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(year1)) {
        daysInMonth[2] = 29;
    }

    int days1 = day1;

    for (int i = 1; i < month1; ++i) {
        days1 += daysInMonth[i];
    }
    days1 += year1 * 365;

    for (int i = year1; i < year2; ++i) {
        if (isLeapYear(i)) {
            days1++;
        }
    }

    int days2 = day2;

    for (int i = 1; i < month2; ++i) {
        days2 += daysInMonth[i];
    }
    days2 += year2 * 365;

    return days2 - days1;
}

void task_1() {

    /* Завдання 1. Написати функцію, яка приймає дві дати
                   (тобто функція приймає шість параметрів) та обчислює
                   різницю в днях між цими датами.Для виконання цього
                   завдання необхідно також написати функцію, яка визна -
                   чає, чи є рік високосним. */


    int day1, month1, year1, day2, month2, year2;

    cout << "Enter first date (day month year): "; cin >> day1 >> month1 >> year1;
    cout << "Enter second date (day month year): "; cin >> day2 >> month2 >> year2;

    int difference = dateDifference(day1, month1, year1, day2, month2, year2);
    cout << "The difference in days between the two dates is: " << difference << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

void task_2() {

    const int size = 5;

    int arr[size] = { 1, 2, 3, 4, 5 };
    int n = size;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double mean = sum / 5.0; 
    cout << "Arithmetic Mean: " << mean << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

void countElements(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
    
    positiveCount = negativeCount = zeroCount = 0;

    for (int i = 0; i < size; ++i) {

        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }
}

void task_3() {

    const int size = 10;

    int arr[] = { 1, -2, 0, 3, -4, 5, 0, 8, -2, 5 };

    int positiveCount, negativeCount, zeroCount;
    countElements(arr, size, positiveCount, negativeCount, zeroCount);

    cout << "Positive Count: " << positiveCount << endl;
    cout << "Negative Count: " << negativeCount << endl;
    cout << "Zero Count: " << zeroCount << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

const int MAX_SIZE = 100;

void initializeMatrix(int arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 100; 
        }
    }
}

void initializeMatrix(double arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = (double)(rand() % 100) / 10.0;
        }
    }
}

void printMatrix(int arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void printMatrix(double arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int findMaxDiagonal(int arr[][MAX_SIZE], int size) {
    int maxDiagonal = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] > maxDiagonal) {
            maxDiagonal = arr[i][i];
        }
    }
    return maxDiagonal;
}

double findMaxDiagonal(double arr[][MAX_SIZE], int size) {
    double maxDiagonal = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] > maxDiagonal) {
            maxDiagonal = arr[i][i];
        }
    }
    return maxDiagonal;
}

int findMinDiagonal(int arr[][MAX_SIZE], int size) {
    int minDiagonal = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] < minDiagonal) {
            minDiagonal = arr[i][i];
        }
    }
    return minDiagonal;
}

double findMinDiagonal(double arr[][MAX_SIZE], int size) {
    double minDiagonal = arr[0][0];
    for (int i = 0; i < size; i++) {
        if (arr[i][i] < minDiagonal) {
            minDiagonal = arr[i][i];
        }
    }
    return minDiagonal;
}

void sortRows(int arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            for (int k = 0; k < size - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

void sortRows(double arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            for (int k = 0; k < size - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    double temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

void task_4() {

    int size;

    cout << "Enter the size of the square matrix: "; cin >> size;

    int intMatrix[MAX_SIZE][MAX_SIZE];
    double doubleMatrix[MAX_SIZE][MAX_SIZE];

    initializeMatrix(intMatrix, size);
    initializeMatrix(doubleMatrix, size);

    cout << "Square matrix (integers):" << endl;
    printMatrix(intMatrix, size);

    cout << "The maximum element on the main diagonal (integers): " << findMaxDiagonal(intMatrix, size) << endl;
    cout << "The minimum element on the main diagonal (integers): " << findMinDiagonal(intMatrix, size) << endl;

    sortRows(intMatrix, size);
    cout << "Sorting matrix rows in ascending order (integers):" << endl;
    printMatrix(intMatrix, size);

    cout << "Square matrix (fractional numbers):" << endl;
    printMatrix(doubleMatrix, size);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////


void main() {

	/*Завдання 1. Написати функцію, яка приймає дві дати
	(тобто функція приймає шість параметрів) та обчислює
		різницю в днях між цими датами.Для виконання цього
		завдання необхідно також написати функцію, яка визна -
		чає, чи є рік високосним.

		Завдання 2. Написати функцію, що визначає середнє
		арифметичне елементів переданого їй масиву.

		Завдання 3. Написати функцію, що визначає кількість
		додатних, від'ємних і нульових елементів переданого їй
		масиву.

		Завдання 4. Написати перевантажені функції(int, double,
			char) для виконання таких завдань :
	■ Ініціалізація квадратної матриці;
	■ Вивід матриці на екран;
	■ Визначення максимального й мінімального елемента
		на головній діагоналі матриці;
	■ Сортування елементів за зростанням окремо для
		кожного рядка матриці.*/


    int choice = 0;

    cout << "Enter task number (1-4): "; cin >> choice;

    switch (choice) {
    case 1: task_1(); break;
    case 2: task_2(); break;
    case 3: task_3(); break;
    case 4: task_4(); break;
    default: cout << "Wrong choice!" << endl; break;
    }
}